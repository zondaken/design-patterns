#include <iostream>

#include "../core/concrete_observable.h"
#include "../core/concrete_observer.h"

template<typename T>
void safe_delete(T*& ptr){
    delete ptr;
    ptr = nullptr;
}

template<typename T, typename... Args>
void safe_delete(T*& ptr, Args... rest) {
    safe_delete(ptr);
    safe_delete(rest...);
}

int main() {
    observable1* obj1 = new observable1();

    observer* obs1 = new observer1(obj1);
    observer* obs2 = new observer2(obj1);
    observer* obs3 = new observer3(obj1);

    obj1->register_observer(obs1);
    obj1->register_observer(obs2);
    obj1->register_observer(obs3);

    obj1->change(-3);

    safe_delete(obj1, obs1, obs2, obs3);

    return EXIT_SUCCESS;
}
