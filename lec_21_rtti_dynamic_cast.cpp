#include <iostream>


struct Base {
    int x = 0;
    virtual void f() {}
    virtual ~Base() = default;
};

struct Derived: Base {
    int y = 0;
    void f() override {}
};


int main() {
    Derived d;
    Base& b = d;
    Base bb;
    int x_int = 55;

    std::cout << typeid(b).name() << "\n";
    std::cout << typeid(bb).name() << "\n";
    std::cout << typeid(x_int).name() << "\n";

    dynamic_cast<Derived&>(b);

    if (Derived* pd = dynamic_cast<Derived*>(&b); pd) {

    }
}