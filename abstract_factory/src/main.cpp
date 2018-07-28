#include <iostream>

#include "../core/concrete_factory.h"

int main() {
    factory* f = new factory3();
    auto p = f->create_c(0);
    p->do_sth_c();

    return 0;
}
