#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "shader.hpp"

namespace tr
{
    class Transform
    {
    public:
        Transform()
        {
            clear();

            pos = glm::vec3(0.0, 0.0, 0.0);
            angle = 0.0;
            scale = glm::vec3(1.0, 1.0, 1.0);
        }

        void translate(const float& x, const float& y)
        {
            pos = glm::vec3(x, y, 0.0);
        }

        void rotate(const float& a)
        {
            angle = a;
        }

        void stretch(const float& x, const float& y)
        {
            scale = glm::vec3(x, y, 0);
        }

        void apply_transform(GLuint& program)
        {
            clear();

            matrix = glm::translate(matrix, pos);
            matrix = glm::rotate(matrix, glm::radians(angle), glm::vec3(0.0f, 0.0f, 1.0));
            matrix = glm::scale(matrix, scale);

            GLuint stm = glGetUniformLocation(program, "transform");
            glUniformMatrix4fv(stm, 1, GL_FALSE, &matrix[0][0]);
        }

    protected:
        GLuint stm;
        glm::mat4 matrix;

        glm::vec3 pos, scale;

        float angle;

        void clear() { matrix = glm::mat4(1.0f); }
    };
}