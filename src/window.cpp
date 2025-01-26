#include "../include/window.hpp"

tr::Window::Window(const std::string& title)
{
    if (!glfwInit()) { return; } // init `glfw`

    glfwWindowHint(GLFW_DOUBLEBUFFER, GLFW_TRUE); // window's `buffer^2` & `glfw = true`

    window = glfwCreateWindow(800, 600, title.c_str(), NULL, NULL);
    if (!window) { return; }
    
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1); // `vert-sync` on

    if (glewInit() != GLEW_OK) { return; } // init `glew` (we only can make it here)

    //>* set `background color` *<//
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}
tr::Window::Window(const u_short& width, const u_short& height, const std::string& title)
{
    if (!glfwInit()) { return; } // init `glfw`
    
    glfwWindowHint(GLFW_DOUBLEBUFFER, GLFW_TRUE); // window's `buffer^2` & `glfw = true`

    window = glfwCreateWindow(width, height, title.c_str(), NULL, NULL);
    if (!window) { return; }
    
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1); // `vert-sync` on

    if (glewInit() != GLEW_OK) { return; } // init `glew` (we only can make it here)

    //>* set `background color` *<//
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}
tr::Window::~Window()
{
    glfwDestroyWindow(window); // free window
    glfwTerminate(); // `glfw` close
}

bool tr::Window::is_closing() { return glfwWindowShouldClose(window); }

GLFWwindow* tr::Window::get_window() { return window; }

