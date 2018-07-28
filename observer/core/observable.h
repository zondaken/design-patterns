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
        virtual void notify_observer(observer* o) final {
            o->update();
        }

        virtual state get_state() = 0;
    protected:
        std::forward_list<observer*> _observers;

        virtual void notify_all() final {
            for(observer* o : _observers) {
                notify_observer(o);
            }
        }
    public:
        virtual void register_observer(observer* o) final {
            _observers.push_front(o);
        }

        virtual void unregister_observer(observer* o) final {
            _observers.remove(o);
        }
};

#endif
