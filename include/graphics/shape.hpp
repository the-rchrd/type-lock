#pragma once

#include <vector>

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

#include "../../interfaces/i_updater.hpp"
#include "../../interfaces/i_drawer.hpp"

namespace tr
{
    class Shape : public IUpdater, public IDrawer
    {
    public:
        Shape();
        ~Shape();

        size_t get_size();

        glm::vec3& get_point(const size_t& i);

        void insert(const float& x, const float& y);
        void insert(const float& x, const float& y, const u_short& r, const u_short& g, const u_short& b);

        void clear();

        virtual void update() override {};
        virtual void draw() override {};

    protected:
        std::vector<glm::vec3>  points;
        std::vector<glm::vec3>  colors;

        GLuint                  points_vbo;
        GLuint                  colors_vbo;
        GLuint                  vao;
    };
}