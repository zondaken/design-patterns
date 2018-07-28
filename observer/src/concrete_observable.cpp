#include "../core/concrete_observable.h"

state observable1::get_state() {
    return { _x };
}

void observable1::change(int x) {
    _x = x;
    notify_all();
}
