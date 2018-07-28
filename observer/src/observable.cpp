#include "../core/observable.h"

void observable::notify_observer(observer* o) {
    o->update();
}

void observable::notify_all() {
    for(observer* o : _observers) {
        notify_observer(o);
    }
}

void observable::register_observer(observer* o) {
    _observers.push_front(o);
}

void observable::unregister_observer(observer* o) {
    _observers.remove(o);
}
