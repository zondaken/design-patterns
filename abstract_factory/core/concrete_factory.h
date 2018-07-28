#ifndef CONCRETE_FACTORY_H
#define CONCRETE_FACTORY_H

#include "factory.h"

class factory1 : public factory {
    protected:
        virtual product_a* factory_method1(int i) override;
        virtual product_b* factory_method2(int i) override;
        virtual product_c* factory_method3(int i) override;
};

class factory2 : public factory {
    protected:
        virtual product_a* factory_method1(int i) override;
        virtual product_b* factory_method2(int i) override;
        virtual product_c* factory_method3(int i) override;
};

class factory3 : public factory {
    protected:
        virtual product_a* factory_method1(int i) override;
        virtual product_b* factory_method2(int i) override;
        virtual product_c* factory_method3(int i) override;
};

#endif
