#include <iostream>


struct Granny {
    virtual void f() const {
        std::cout << 1;
    }

    virtual ~Granny() = default;
};

struct Mom: Granny {
private:
    int* p = new int(0);
    void f() const override {
        std::cout << 2;
    }
public:
    ~Mom () {
        delete p;
    }
};

struct Son: Mom {
    void f() const final {
        std::cout << 3;
    }
};

int main() {

    Mom d;
    Granny& b = d;
    b.f();

    Mom m;
    Granny g;

    int x;
    std::cout << "Enter x: ";
    std::cin >> x;
    
    Granny& gg = (x % 2 ? m : g);

    gg.f();

    double p = M_PI;
    
}

