#include "../core/factory.h"

product* factory::create(int i) {
    return factory_method(i);
}
