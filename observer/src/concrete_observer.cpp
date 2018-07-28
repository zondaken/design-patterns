#include "../core/concrete_observer.h"

// this observer asserts that the updated value remains positive

observer1::observer1(observable1* obj) : _obj(obj) {}

void observer1::update() {
    state s = _obj->get_state();

    if(s.x < 0) {
        std::cout << "C: VALUE BELOW  0 CAUGHT!\n";
    }
}

observer2::observer2(observable1* obj) : _obj(obj) {}

void observer2::update() {
    state s = _obj->get_state();

    if(s.x < 5) {
        std::cout << "C: VALUE BELOW  5 CAUGHT!\n";
    }
}

observer3::observer3(observable1* obj) : _obj(obj) {}

void observer3::update() {
    state s = _obj->get_state();

    if(s.x < 15) {
        std::cout << "C: VALUE BELOW 15 CAUGHT!\n";
    }
}
