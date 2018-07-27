#include "../core/factory.h"

product_a* factory::create_a(int i) {
    return factory_method_a(i);
}

product_b* factory::create_b(int i) {
    return factory_method_b(i);
}

product_c* factory::create_c(int i) {
    return factory_method_c(i);
}
