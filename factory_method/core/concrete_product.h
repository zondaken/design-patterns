#ifndef CONCRETE_PRODUCT_H
#define CONCRETE_PRODUCT_H

#include "product.h"
#include <iostream>

class concrete_product : public product {
    public:
        virtual void do_sth() override {
            std::cout << "I'm the first subclass" << std::endl;
        }
};

#endif
