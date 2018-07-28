#ifndef CONCRETE_FACTORY_H
#define CONCRETE_FACTORY_H

#include "factory.h"
#include "concrete_product.h"

class factory1 : public factory {
    protected:
        virtual product* factory_method(int a) override;
};

class factory2 : public factory {
    protected:
        virtual product* factory_method(int a) override;
};

class factory3 : public factory {
    protected:
        virtual product* factory_method(int a) override;
};

#endif
