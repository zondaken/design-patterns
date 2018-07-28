#include "product.h"

/*
 * product_a
 */

class product11 : public product_a {
    public:
        virtual void do_sth_a() override;
};

class product12 : public product_a {
    public:
        virtual void do_sth_a() override;
};

class product13 : public product_a {
    public:
        virtual void do_sth_a() override;
};

/*
 * product_b
 */

class product21 : public product_b {
    public:
        virtual void do_sth_b() override;
};

class product22 : public product_b {
    public:
        virtual void do_sth_b() override;
};

class product23 : public product_b {
    public:
        virtual void do_sth_b() override;
};

/*
 * product_c
 */

class product31 : public product_c {
    public:
        virtual void do_sth_c() override;
};

class product32 : public product_c {
    public:
        virtual void do_sth_c() override;
};

class product33 : public product_c {
    public:
        virtual void do_sth_c() override;
};
