#ifndef CONCRETE_OBSERVABLE_H
#define CONCRETE_OBSERVABLE_H

#include "observable.h"

class observable1 : public observable {
    private:
        int _x;
    public:
        virtual state get_state() override;
        void change(int x);
};

#endif
