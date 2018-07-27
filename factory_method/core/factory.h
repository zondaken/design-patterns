#ifndef FACTORY_H
#define FACTORY_H

#include "product.h"

class factory {
    protected:
        virtual product* factory_method(int i) = 0;
    public:
        virtual product* create(int i);
};

#endif
