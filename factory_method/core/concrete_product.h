#ifndef CONCRETE_PRODUCT_H
#define CONCRETE_PRODUCT_H

#include "product.h"
#include <iostream>

class concrete_product_a : public product {
    public:
        virtual void do_sth() override;
};

class concrete_product_b : public product {
    public:
        virtual void do_sth() override;
};

class concrete_product_c : public product {
    public:
        virtual void do_sth() override;
};

#endif
