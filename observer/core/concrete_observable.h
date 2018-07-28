#ifndef CONCRETE_OBSERVABLE_H
#define CONCRETE_OBSERVABLE_H

#include "observable.h"

class concrete_observable : public observable {
    private:
        int _x;
    public:
        virtual state get_state() override {
            return { _x };
        }

        void change(int x) {
            _x = x;
            notify_all();
        }
};

#endif
