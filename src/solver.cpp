#include "../include/solver.hpp"

tr::Solver::Solver(Window* window) : window(window) {}

void tr::Solver::solve()
{
    while (!window->is_closing())
    {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // clear content

        glfwSwapBuffers(window->get_window()); // update content / swap buffers
        glfwPollEvents(); // pool events / input?
    }
}