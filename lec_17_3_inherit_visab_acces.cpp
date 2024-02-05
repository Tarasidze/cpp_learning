#include <iostream>

struct Base {
    int x = -1;

    void f(int) {
        std::cout << 1 << "\n";
    }
};


struct Derived: Base {
    friend struct Third;
    int y;
    
    using Base::f;
    void f(double) {
        std::cout << 2 << "\n";
    }
};

struct Third: Derived {
    int z;

};


int main() {
    Derived d;
    d.f(0);
    d.f(0.0);
    d.Base::f(0);


    Third t;
    std::cout << t.Derived::Base::x << "\n";
    std::cout << t.Base::x << "\n";

}