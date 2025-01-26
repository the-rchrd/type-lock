#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include "window.hpp"

namespace tr
{
    class Solver
    {
    public:
        Solver(Window* window);

        void solve();

    private:
        Window* window;
    };
}