
#pragma once 

#include "AbstractWindow.hpp"
#include "CustomWindow.hpp"
#include "MessageLoop.hpp"
#include "Window.hpp"
#include "WindowClassRegistry.hpp"

namespace glass {
    class Button : public Window {
    public:
        Button() : Window("BUTTON", WS_CHILD, NULL) {}
    };

    class Label : public Window {
    public:
        Label() : Window("STATIC", WS_CHILD, NULL) {}
    };
}
