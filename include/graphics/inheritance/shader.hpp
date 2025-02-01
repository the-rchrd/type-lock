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
        Shader(const char* path);
        ~Shader();

        void use_shader();

        GLuint& get_shader_program();

        void check_shader();

    protected:
        GLuint vertex;
        GLuint fragment;
        GLuint program;

        std::string path;

        std::string load(const char* path);

        void load_vertex();
        void load_fragment();
    };
}