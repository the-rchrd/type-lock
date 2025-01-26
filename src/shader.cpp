#include "../include/shader.hpp"

tr::Shader::Shader()
{
    vertex = glCreateShader(GL_VERTEX_SHADER);
    fragment = glCreateShader(GL_FRAGMENT_SHADER);
    program = glCreateProgram();

    std::string vert_src = load("/Users/therchrd/Documents/Code/type-lock/shaders/vertex.vert");
    const char* vert = vert_src.c_str();
    glShaderSource(vertex, 1, &vert, NULL);
    glCompileShader(vertex);

    std::string frag_src = load("/Users/therchrd/Documents/Code/type-lock/shaders/fragment.frag");
    const char* frag = frag_src.c_str();
    glShaderSource(fragment, 1, &frag, NULL);
    glCompileShader(fragment);

    glAttachShader(program, vertex);
    glBindAttribLocation(program, 0, "vertex_position"); 
    glBindAttribLocation(program, 1, "vertex_colour"); 
    
    glAttachShader(program, fragment);

    glLinkProgram(program);

    check_shader();

    glUseProgram(program);
}

tr::Shader::~Shader()
{
    glDeleteProgram(program);
    glDeleteShader(vertex);
    glDeleteShader(fragment);
}

std::string tr::Shader::load(const char* path)
{
    std::ifstream in(path);
    std::stringstream stream;
    
    stream << in.rdbuf();

    return stream.str();
}