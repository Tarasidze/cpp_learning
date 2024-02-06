#include <iostream>

//

struct Base {
    int x = 1;
};


struct Derived: Base {
    int y = 2;
};

void f(Base& b) {
    std::cout << b.x;
}


int main() {
    Derived d;
    f(d);
}
