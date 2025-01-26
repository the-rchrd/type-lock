#include "../../include/graphics/shape.hpp"

tr::Shape::Shape()
{
    glGenVertexArrays(1, &vao);
    glGenBuffers(1, &points_vbo);
    glGenBuffers(1, &colors_vbo);
}
tr::Shape::~Shape()
{
    glDeleteBuffers(1, &points_vbo);
    glDeleteBuffers(1, &colors_vbo);
    glDeleteVertexArrays(1, &vao);
}

size_t tr::Shape::get_size() { return points.size(); }

glm::vec3& tr::Shape::get_point(const size_t& i) { return points[i]; }

void tr::Shape::clear() { points.clear(); colors.clear(); }

void tr::Shape::insert(const float& x, const float& y)
{
    glm::vec3 point = { x, y, 0.0f };
    glm::vec3 color = { 1.0f, 1.0f, 1.0f };

    points.push_back(point);
    colors.push_back(color);
}
void tr::Shape::insert(const float& x, const float& y, const u_short& r, const u_short& g, const u_short& b)
{
    glm::vec3 point = { x, y, 0.0f };
    glm::vec3 color = { r, g, b };

    points.push_back(point);
    colors.push_back(color);
}