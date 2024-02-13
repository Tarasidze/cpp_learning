#include <iostream>


struct Base {
    virtual void f() {
        std::cout << 1;
    }

    virtual ~Base() = default;
};

struct Derived: Base {
    int* p = new int(0);
    void f() {
        std::cout << 2;
    }

    ~Derived() {
        delete p;
    }
};

int main() {
    Derived d;
    Base& b = d;
    b.f();
}

