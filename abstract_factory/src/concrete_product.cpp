#include "../core/concrete_product.h"

#include <iostream>

/*
 * product_a
 */

void concrete_product_a_a::do_sth_a() {
    std::cout << "I'm the first subclass of family A.";
}

void concrete_product_a_b::do_sth_a() {
    std::cout << "I'm the second subclass of family A.";
}

void concrete_product_a_c::do_sth_a() {
    std::cout << "I'm the third subclass of family A.";
}

/*
 * product_b
 */

void concrete_product_b_a::do_sth_b() {
    std::cout << "I'm the first subclass of family B.";
}

void concrete_product_b_b::do_sth_b() {
    std::cout << "I'm the second subclass of family B.";
}

void concrete_product_b_c::do_sth_b() {
    std::cout << "I'm the third subclass of family B.";
}

/*
 * product_c
 */

void concrete_product_c_a::do_sth_c() {
    std::cout << "I'm the first subclass of family C.";
}

void concrete_product_c_b::do_sth_c() {
    std::cout << "I'm the second subclass of family C.";
}

void concrete_product_c_c::do_sth_c() {
    std::cout << "I'm the third subclass of family C.";
}
