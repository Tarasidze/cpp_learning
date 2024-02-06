#include <iostream>


struct A {
    A(int x) {std::cout << "A" << x << "\n";}
    ~A() {std::cout << "~A" << "\n";}
};


struct Base {
    A x;
    Base() = default;
    Base(int x): x(x) { std::cout << "Base" << "\n";}
    ~Base() {std::cout << "~Base" << "\n";}
};

struct Derived: Base {
    A y;

    using Base::Base; // do all cunstructors from derid=veds

    Derived(int y): Base(5), y(y) { std::cout << "Derived" << "\n";}
    ~Derived() {std::cout << "~Derived" << "\n";}
};

int main() {
    // std::cout << sizeof(Derived);

    Derived d = 1;

    std::cout << sizeof(d) << "\n";
}
