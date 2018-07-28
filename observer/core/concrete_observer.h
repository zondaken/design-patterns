#ifndef CONCRETE_OBSERVER_H
#define CONCRETE_OBSERVER_H

#include <iostream>

#include "observer.h"
#include "concrete_observable.h"

// this observer asserts that the updated value remains positive

class concrete_observer_a : public observer {
    private:
        concrete_observable* _obj;
    public:
        concrete_observer_a(concrete_observable* obj) : _obj(obj) {}

        virtual void update() override {
            state s = _obj->get_state();

            if(s.x < 0) {
                std::cout << "C: VALUE BELOW  0 CAUGHT!\n";
            }
        }
};

// this observer asserts that the updated value remains above 5

class concrete_observer_b : public observer {
    private:
        concrete_observable* _obj;
    public:
        concrete_observer_b(concrete_observable* obj) : _obj(obj) {}

        virtual void update() override {
            state s = _obj->get_state();

            if(s.x < 5) {
                std::cout << "C: VALUE BELOW  5 CAUGHT!\n";
            }
        }
};

// this observer asserts that the updated value remains above 15

class concrete_observer_c : public observer {
    private:
        concrete_observable* _obj;
    public:
        concrete_observer_c(concrete_observable* obj) : _obj(obj) {}

        virtual void update() override {
            state s = _obj->get_state();

            if(s.x < 15) {
                std::cout << "C: VALUE BELOW 15 CAUGHT!\n";
            }
        }
};

#endif
