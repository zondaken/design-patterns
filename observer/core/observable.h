#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include "observer.h"
#include <forward_list>

struct state {
    int x;
};

class observable {
    friend class observer;

    private:
        virtual state get_state() = 0;
        virtual void notify_observer(observer* o) final;
    protected:
        std::forward_list<observer*> _observers;

        virtual void notify_all() final;
    public:
        virtual void register_observer(observer* o);
        virtual void unregister_observer(observer* o);
};

#endif
