#define GLFW_INCLUDE_NONE
#define GLFW_DLL

#include <iostream>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include "include/window.hpp"
#include "include/solver.hpp"

int main()
{
    tr::Window window("type-lock?");
    tr::Solver solver(&window);

    solver.solve();
    
    return 0;
}