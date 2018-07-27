#include "../core/concrete_factory.h"

product* concrete_factory_a::factory_method(int a) {
    if(a == 0) {
        return new concrete_product_a();
    } else if(a == 1) {
        return new concrete_product_b();
    } else if(a == 2) {
        return new concrete_product_c();
    }
}

product* concrete_factory_b::factory_method(int a) {
    if(a == 1) {
        return new concrete_product_a();
    } else if(a == 2) {
        return new concrete_product_b();
    } else if(a == 0) {
        return new concrete_product_c();
    }
}

product* concrete_factory_c::factory_method(int a) {
    if(a == 2) {
        return new concrete_product_a();
    } else if(a == 1) {
        return new concrete_product_b();
    } else if(a == 0) {
        return new concrete_product_c();
    }
}
