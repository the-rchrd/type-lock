#pragma once

#include <iostream>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

namespace tr
{
    class Window
    {
    public:
        Window(const char* title);
        Window(const u_short& width, const u_short& height, const char* title);
        ~Window();

        bool is_closing();

        GLFWwindow* get_window();

    private:
        GLFWwindow* window;
    };
}