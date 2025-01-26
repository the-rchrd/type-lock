#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

namespace tr
{
    class Shader
    {
    public:
        Shader();
        ~Shader();

    private:
        GLuint vertex;
        GLuint fragment;
        GLuint program;

        //std::string res;

        std::string load(const char* path);

        void check_shader()
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
    };
}