
#pragma once 

#include <string>
#include <memory>

#include "EventRaiser.hpp"

namespace wcl::core {
    class Menu;
    class MenuItem : public EventRaiser {
    public:
        explicit MenuItem(const Menu *parent, const int id);

        ~MenuItem();

        void enable() {
            setEnabled(true);
        }

        void disable() {
            setEnabled(false);
        }

        bool isEnabled() const;

        void setEnabled(const bool value);

        void toggleEnabled() {
            setEnabled(! isEnabled());
        }

        void check() {
            setChecked(true);
        }

        void uncheck() {
            setChecked(false);
        }

        bool isChecked() const;

        void setChecked(const bool value);

        void toggleChecked() {
            setChecked(! isChecked());
        }

    private:
        struct Impl;
        std::unique_ptr<Impl> mImpl;
    };
}
