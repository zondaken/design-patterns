#include "../core/concrete_factory.h"

product* factory1::factory_method(int a) {
    if(a == 0) {
        return new concrete_product_a();
    } else if(a == 1) {
        return new concrete_product_b();
    } else if(a == 2) {
        return new concrete_product_c();
    }
}

product* factory2::factory_method(int a) {
    if(a == 1) {
        return new concrete_product_a();
    } else if(a == 2) {
        return new concrete_product_b();
    } else if(a == 0) {
        return new concrete_product_c();
    }
}

product* factory3::factory_method(int a) {
    if(a == 2) {
        return new concrete_product_a();
    } else if(a == 1) {
        return new concrete_product_b();
    } else if(a == 0) {
        return new concrete_product_c();
    }
}
