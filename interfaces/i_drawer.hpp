#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

namespace tr
{
    class IDrawer
    {
    public:
        virtual ~IDrawer() = default;

        virtual void draw() = 0;
    };
}