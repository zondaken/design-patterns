#include "../core/concrete_product.h"

void concrete_product_a::do_sth() {
    std::cout << "I'm the first subclass" << std::endl;
}

void concrete_product_b::do_sth() {
    std::cout << "I'm the second subclass" << std::endl;
}

void concrete_product_c::do_sth() {
    std::cout << "I'm the third subclass" << std::endl;
}
