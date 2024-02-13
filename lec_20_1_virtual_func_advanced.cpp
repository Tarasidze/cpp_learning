#include <iostream>


struct Base {
    virtual void f() const {
        std::cout << 1;
    }

    virtual ~Base() = default;
};

struct Derived: Base {
    int* p = new int(0);
    void f() const override {
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

