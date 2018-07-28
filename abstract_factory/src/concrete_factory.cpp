#include "../core/concrete_factory.h"

#include "../core/concrete_product.h"

/*
 * factory1
 */

product_a* factory1::factory_method1(int i) {
    if(i == 0) {
        return new product11();
    } else if(i == 1) {
        return new product12();
    } else if(i == 2) {
        return new product13();
    }
}

product_b* factory1::factory_method2(int i) {
    if(i == 0) {
        return new product21();
    } else if(i == 1) {
        return new product22();
    } else if(i == 2) {
        return new product23();
    }
}

product_c* factory1::factory_method3(int i) {
    if(i == 0) {
        return new product31();
    } else if(i == 1) {
        return new product32();
    } else if(i == 2) {
        return new product33();
    }
}

/*
 * factory2
 */

product_a* factory2::factory_method1(int i) {
    if(i == 2) {
        return new product11();
    } else if(i == 1) {
        return new product12();
    } else if(i == 0) {
        return new product13();
    }
}

product_b* factory2::factory_method2(int i) {
    if(i == 2) {
        return new product21();
    } else if(i == 1) {
        return new product22();
    } else if(i == 0) {
        return new product23();
    }
}

product_c* factory2::factory_method3(int i) {
    if(i == 2) {
        return new product31();
    } else if(i == 1) {
        return new product32();
    } else if(i == 0) {
        return new product33();
    }
}

/*
 * factory3
 */

product_a* factory3::factory_method1(int i) {
    if(i == 1) {
        return new product11();
    } else if(i == 2) {
        return new product12();
    } else if(i == 0) {
        return new product13();
    }
}

product_b* factory3::factory_method2(int i) {
    if(i == 1) {
        return new product21();
    } else if(i == 2) {
        return new product22();
    } else if(i == 0) {
        return new product23();
    }
}

product_c* factory3::factory_method3(int i) {
    if(i == 1) {
        return new product31();
    } else if(i == 2) {
        return new product32();
    } else if(i == 0) {
        return new product33();
    }
}
