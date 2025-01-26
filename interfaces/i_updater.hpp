#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

namespace tr
{
    class IUpdater
    {
    public:
        virtual ~IUpdater() = default;

        virtual void update() = 0;
    };
}