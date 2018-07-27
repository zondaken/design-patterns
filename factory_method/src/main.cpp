#include <iostream>

#include "../core/concrete_factory.h"

int main() {
    factory* f = new concrete_factory_c();
    product* p;

    for(int32_t i = 0; i < 3; i += 1) {
        p = f->create(i);
        p->do_sth();
        delete p;
    }

    delete f;

    return 0;
}
