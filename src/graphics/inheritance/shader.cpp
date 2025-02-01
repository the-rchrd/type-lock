#include "../../../include/graphics/inheritance/shader.hpp"

tr::Shader::Shader(const char* path) : path(path)
{
    vertex = glCreateShader(GL_VERTEX_SHADER);
    fragment = glCreateShader(GL_FRAGMENT_SHADER);
    program = glCreateProgram();

    load_vertex();
    load_fragment();

    glAttachShader(program, vertex);
    glAttachShader(program, fragment);

    glLinkProgram(program);

    check_shader();
}

tr::Shader::~Shader()
{
    glDeleteProgram(program);
    glDeleteShader(vertex);
    glDeleteShader(fragment);
}

void tr::Shader::use_shader() { glUseProgram(program); }

GLuint& tr::Shader::get_shader_program() { return program; }

std::string tr::Shader::load(const char* path)
{
    std::ifstream in(path);
    std::stringstream stream;
    
    stream << in.rdbuf();

    return stream.str();
}

void tr::Shader::load_vertex()
{
    std::string vert_src = path;
    vert_src += "/vertex.vert";
    vert_src = load(vert_src.c_str());

    const char* vert = vert_src.c_str();
    glShaderSource(vertex, 1, &vert, NULL);
    glCompileShader(vertex);
}

void tr::Shader::load_fragment()
{
    std::string frag_src = path;
    frag_src += "/fragment.frag";
    frag_src = load(frag_src.c_str());
    
    const char* frag = frag_src.c_str();
    glShaderSource(fragment, 1, &frag, NULL);
    glCompileShader(fragment);
}

void tr::Shader::check_shader()
{
    GLint success;
    GLchar log[1024];

    glGetShaderiv(vertex, GL_COMPILE_STATUS, &success);
    if (!success)
    {
        glGetShaderInfoLog(vertex, 1024, NULL, log);
        std::cerr << "ERROR::VERTEX_SHADER_COMPILATION_ERROR\n" << log << std::endl;
    }
    glGetShaderiv(fragment, GL_COMPILE_STATUS, &success);

    if (!success)
    {
        glGetShaderInfoLog(fragment, 1024, NULL, log);
        std::cerr << "ERROR::FRAGMENT_SHADER_COMPILATION_ERROR\n" << log << std::endl;
    }

    glGetProgramiv(program, GL_LINK_STATUS, &success);
    if (!success)
    {
        glGetProgramInfoLog(program, 1024, NULL, log);
        std::cerr << "ERROR::SHADER_PROGRAM_LINKING_ERROR\n" << log << std::endl;
    }
}