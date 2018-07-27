#ifndef FACTORY_H
#define FACTORY_H

#include "base.h"

enum factory_product_e { FOO, BAR };

class factory_t {
    protected:
        base factory_method(factory_product_e c);
    public:
        base create(factory_product_e c);
};

#endif
