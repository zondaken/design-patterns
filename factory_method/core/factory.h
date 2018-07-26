#ifndef FACTORY_H
#define FACTORY_H

#include "product.h"

class factory {
    public:
        virtual product* create() { throw "Abstract method (factory::create(): product)"; }
};

#endif
