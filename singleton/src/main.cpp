#include <iostream>

#include "../core/singleton.h"

int main() {
    singleton_t& st = singleton_t::instance();
    st.print();

    return 0;
}
