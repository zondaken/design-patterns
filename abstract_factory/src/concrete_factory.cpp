#include "../core/concrete_factory.h"

#include "../core/concrete_product.h"

/*
 * concrete_factory_a
 */

product_a* concrete_factory_a::factory_method_a(int i) {
    if(i == 0) {
        return new concrete_product_a_a();
    } else if(i == 1) {
        return new concrete_product_a_b();
    } else if(i == 2) {
        return new concrete_product_a_c();
    }
}

product_b* concrete_factory_a::factory_method_b(int i) {
    if(i == 0) {
        return new concrete_product_b_a();
    } else if(i == 1) {
        return new concrete_product_b_b();
    } else if(i == 2) {
        return new concrete_product_b_c();
    }
}

product_c* concrete_factory_a::factory_method_c(int i) {
    if(i == 0) {
        return new concrete_product_c_a();
    } else if(i == 1) {
        return new concrete_product_c_b();
    } else if(i == 2) {
        return new concrete_product_c_c();
    }
}

/*
 * concrete_factory_b
 */

product_a* concrete_factory_b::factory_method_a(int i) {
    if(i == 2) {
        return new concrete_product_a_a();
    } else if(i == 1) {
        return new concrete_product_a_b();
    } else if(i == 0) {
        return new concrete_product_a_c();
    }
}

product_b* concrete_factory_b::factory_method_b(int i) {
    if(i == 2) {
        return new concrete_product_b_a();
    } else if(i == 1) {
        return new concrete_product_b_b();
    } else if(i == 0) {
        return new concrete_product_b_c();
    }
}

product_c* concrete_factory_b::factory_method_c(int i) {
    if(i == 2) {
        return new concrete_product_c_a();
    } else if(i == 1) {
        return new concrete_product_c_b();
    } else if(i == 0) {
        return new concrete_product_c_c();
    }
}

/*
 * concrete_factory_c
 */

product_a* concrete_factory_c::factory_method_a(int i) {
    if(i == 1) {
        return new concrete_product_a_a();
    } else if(i == 2) {
        return new concrete_product_a_b();
    } else if(i == 0) {
        return new concrete_product_a_c();
    }
}

product_b* concrete_factory_c::factory_method_b(int i) {
    if(i == 1) {
        return new concrete_product_b_a();
    } else if(i == 2) {
        return new concrete_product_b_b();
    } else if(i == 0) {
        return new concrete_product_b_c();
    }
}

product_c* concrete_factory_c::factory_method_c(int i) {
    if(i == 1) {
        return new concrete_product_c_a();
    } else if(i == 2) {
        return new concrete_product_c_b();
    } else if(i == 0) {
        return new concrete_product_c_c();
    }
}
