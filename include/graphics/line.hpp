#pragma once

#include "inheritance/shape.hpp"
#include "inheritance/shader.hpp"
#include "inheritance/transform.hpp"

namespace tr
{
    class Line : public Shape, public Transform, public Shader
    {
    public:
        Line(const glm::vec3& a, const glm::vec3& b) : Shader("/Users/therchrd/Documents/Code/type-lock/shaders/no_lightning/shape")
        {
            insert(a);
            insert(b);
        }

        void update() override
        {
            use_shader();
            
            glBindVertexArray(vao);

            glBindBuffer(GL_ARRAY_BUFFER, points_vbo);
            glBufferData(GL_ARRAY_BUFFER, points.size() * sizeof(glm::vec3), points.data(), GL_STATIC_DRAW);
            glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, nullptr);
            glEnableVertexAttribArray(0);

            glBindBuffer(GL_ARRAY_BUFFER, colors_vbo);
            glBufferData(GL_ARRAY_BUFFER, colors.size() * sizeof(glm::vec3), colors.data(), GL_STATIC_DRAW);
            glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 0, nullptr);
            glEnableVertexAttribArray(1);

            apply_transform(get_shader_program());
        }

        void draw() override
        {
            use_shader();

            glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

            glDrawArrays(GL_LINE_STRIP, 0, points.size());
        }
    };
}