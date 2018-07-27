#include "product.h"

/*
 * product_a
 */

class concrete_product_a_a : public product_a {
    public:
        virtual void do_sth_a() override;
};

class concrete_product_a_b : public product_a {
    public:
        virtual void do_sth_a() override;
};

class concrete_product_a_c : public product_a {
    public:
        virtual void do_sth_a() override;
};

/*
 * product_b
 */

class concrete_product_b_a : public product_b {
    public:
        virtual void do_sth_b() override;
};

class concrete_product_b_b : public product_b {
    public:
        virtual void do_sth_b() override;
};

class concrete_product_b_c : public product_b {
    public:
        virtual void do_sth_b() override;
};

/*
 * product_c
 */

class concrete_product_c_a : public product_c {
    public:
        virtual void do_sth_c() override;
};

class concrete_product_c_b : public product_c {
    public:
        virtual void do_sth_c() override;
};

class concrete_product_c_c : public product_c {
    public:
        virtual void do_sth_c() override;
};
