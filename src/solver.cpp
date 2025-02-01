#include "../include/solver.hpp"

#include "../include/graphics/line.hpp"
#include "../include/graphics/rect.hpp"

tr::Solver::Solver(Window* window) : window(window) {}

void tr::Solver::solve()
{
    Rect rect(glm::vec3(0.5, 0.0, 0.0), 0.5, 0.5);

    while (!window->is_closing())
    {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        rect.update();
        rect.draw();
        
        glfwSwapBuffers(window->get_window()); // update content / swap buffers
        glfwPollEvents(); // pool events / input?
    }
}