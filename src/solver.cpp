#include "../include/solver.hpp"

#include "../include/graphics/line.hpp"
#include "../include/shader.hpp"

tr::Solver::Solver(Window* window) : window(window) {}

void tr::Solver::solve()
{
    Shader shader;
    Line line;

    while (!window->is_closing())
    {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        //glUseProgram(shader.get_program());

        line.clear();
        
        line.insert(0.0f, 0.0f, 255, 0, 0);
        line.insert(0.0, 1.0f, 0, 255, 0);
        line.insert(1.0f, 0.0f, 0, 0, 255);

        line.update();
        line.draw();

        glfwSwapBuffers(window->get_window()); // update content / swap buffers
        glfwPollEvents(); // pool events / input?
    }
}