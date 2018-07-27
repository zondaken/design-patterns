#ifndef CONCRETE_FACTORY_H
#define CONCRETE_FACTORY_H

#include "factory.h"
#include "concrete_product.h"

class concrete_factory_a : public factory {
    protected:
        virtual product* factory_method(int a) override;
};

class concrete_factory_b : public factory {
    protected:
        virtual product* factory_method(int a) override;
};

class concrete_factory_c : public factory {
    protected:
        virtual product* factory_method(int a) override;
};

#endif
