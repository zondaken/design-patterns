#ifndef CONCRETE_FACTORY_H
#define CONCRETE_FACTORY_H

#include "factory.h"
#include "concrete_product.h"

class concrete_factory_a : public factory {
    protected:
        virtual product* factory_method(int a) override {
            if(a == 0) {
                return new concrete_product_a();
            } else if(a == 1) {
                return new concrete_product_b();
            } else if(a == 2) {
                return new concrete_product_c();
            }
        }
};

class concrete_factory_b : public factory {
    protected:
        virtual product* factory_method(int a) override {
            if(a == 1) {
                return new concrete_product_a();
            } else if(a == 2) {
                return new concrete_product_b();
            } else if(a == 0) {
                return new concrete_product_c();
            }
        }
};

class concrete_factory_c : public factory {
    protected:
        virtual product* factory_method(int a) override {
            if(a == 2) {
                return new concrete_product_a();
            } else if(a == 1) {
                return new concrete_product_b();
            } else if(a == 0) {
                return new concrete_product_c();
            }
        }
};

#endif
