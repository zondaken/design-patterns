#ifndef CONCRETE_FACTORY_H
#define CONCRETE_FACTORY_H

#include "factory.h"
#include "concrete_product.h"

class concrete_factory : public factory {
    public:
        virtual product* create() override {
            return new concrete_product();
        }
};

#endif
