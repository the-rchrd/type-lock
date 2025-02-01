#include "../include/window.hpp"

tr::Window::Window(const char* title)
{
    if (!glfwInit()) { return; } // init `glfw`

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    #ifdef __APPLE__
        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    #endif
    
    glfwWindowHint(GLFW_DOUBLEBUFFER, GLFW_TRUE); // window's `buffer^2` & `glfw = true`

    window = glfwCreateWindow(800, 600, title, NULL, NULL);
    if (!window) { return; }
    
    glfwMakeContextCurrent(window);
    //glfwSwapInterval(1); // `vert-sync` on

    if (glewInit() != GLEW_OK) { return; } // init `glew` (we only can make it here)

    //>* set `background color` *<//
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
}
tr::Window::Window(const u_short& width, const u_short& height, const char* title)
{
    if (!glfwInit()) { return; } // init `glfw`

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    #ifdef __APPLE__
        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    #endif
    
    glfwWindowHint(GLFW_DOUBLEBUFFER, GLFW_TRUE); // window's `buffer^2` & `glfw = true`

    window = glfwCreateWindow(width, height, title, NULL, NULL);
    if (!window) { return; }
    
    glfwMakeContextCurrent(window);
    //glfwSwapInterval(1); // `vert-sync` on

    if (glewInit() != GLEW_OK) { return; } // init `glew` (we only can make it here)

    //>* set `background color` *<//
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
}
tr::Window::~Window()
{
    glfwDestroyWindow(window); // free window
    glfwTerminate(); // `glfw` close
}

bool tr::Window::is_closing() { return glfwWindowShouldClose(window); }

GLFWwindow* tr::Window::get_window() { return window; }

