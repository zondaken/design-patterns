#include "../core/concrete_product.h"

#include <iostream>

/*
 * product_a
 */

void product11::do_sth_a() {
    std::cout << "I'm the first subclass of family A.";
}

void product12::do_sth_a() {
    std::cout << "I'm the second subclass of family A.";
}

void product13::do_sth_a() {
    std::cout << "I'm the third subclass of family A.";
}

/*
 * product_b
 */

void product21::do_sth_b() {
    std::cout << "I'm the first subclass of family B.";
}

void product22::do_sth_b() {
    std::cout << "I'm the second subclass of family B.";
}

void product23::do_sth_b() {
    std::cout << "I'm the third subclass of family B.";
}

/*
 * product_c
 */

void product31::do_sth_c() {
    std::cout << "I'm the first subclass of family C.";
}

void product32::do_sth_c() {
    std::cout << "I'm the second subclass of family C.";
}

void product33::do_sth_c() {
    std::cout << "I'm the third subclass of family C.";
}
