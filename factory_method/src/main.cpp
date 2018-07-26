#include <iostream>

#include "../core/concrete_factory.h"

int main() {
    factory* f = new concrete_factory();
    product* p = f->create();

    try {
        p->do_sth();
        delete p;
    } catch(const char* err) {
        std::cout << err;
    }

    delete f;

    return 0;
}
