#include <iostream>


struct Base {
    int x;
    virtual void f() {}; // virtual function can't be static    
                        // virtual function should be defined

    virtual void func(int x = 1) {
        std::cout << "Base" << x;
    }
};

struct Derived: Base {
    void func(int x = 2) override {
        std::cout << "Derived " << x;
    }
};


int main() {
    Derived d;

    Base& b = d;

    b.func();
}