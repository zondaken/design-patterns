#ifndef CONCRETE_OBSERVER_H
#define CONCRETE_OBSERVER_H

#include <iostream>

#include "observer.h"
#include "concrete_observable.h"

// this observer asserts that the updated value remains positive

class observer1 : public observer {
    private:
        observable1* _obj;
    public:
        observer1(observable1* obj);
        virtual void update() override;
};

// this observer asserts that the updated value remains above 5

class observer2 : public observer {
    private:
        observable1* _obj;
    public:
        observer2(observable1* obj);
        virtual void update() override;
};

// this observer asserts that the updated value remains above 15

class observer3 : public observer {
    private:
        observable1* _obj;
    public:
        observer3(observable1* obj);
        virtual void update() override;
};

#endif
