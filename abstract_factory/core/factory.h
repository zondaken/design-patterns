#ifndef FACTORY_H
#define FACTORY_H

#include "product.h"

class factory {
    protected:
        virtual product_a* factory_method_a(int i) = 0;
        virtual product_b* factory_method_b(int i) = 0;
        virtual product_c* factory_method_c(int i) = 0;
    public:
        virtual product_a* create_a(int i);
        virtual product_b* create_b(int i);
        virtual product_c* create_c(int i);
};

#endif
