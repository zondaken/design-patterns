#include "../core/factory.h"

#include "../core/derived.h"

base factory_t::factory_method(factory_product_e c) {
    if(c == factory_product_e::FOO) {
        foo result;
        return result;
    } else if(c == factory_product_e::BAR) {
        bar result;
        return result;
    } else {
        throw "Invalid input";
    }
}

base factory_t::create(factory_product_e c) {
    return factory_method();
}
