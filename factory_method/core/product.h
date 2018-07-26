#ifndef PRODUCT_H
#define PRODUCT_H

class product {
    public:
        virtual void do_sth() { throw "Abstract method (product::do_sth(): void)"; }
};

#endif
