#ifndef CONCRETE_FACTORY_H
#define CONCRETE_FACTORY_H

#include "factory.h"

class concrete_factory_a : public factory {
    protected:
        virtual product_a* factory_method_a(int i) override;
        virtual product_b* factory_method_b(int i) override;
        virtual product_c* factory_method_c(int i) override;
};

class concrete_factory_b : public factory {
    protected:
        virtual product_a* factory_method_a(int i) override;
        virtual product_b* factory_method_b(int i) override;
        virtual product_c* factory_method_c(int i) override;
};

class concrete_factory_c : public factory {
    protected:
        virtual product_a* factory_method_a(int i) override;
        virtual product_b* factory_method_b(int i) override;
        virtual product_c* factory_method_c(int i) override;
};

#endif
