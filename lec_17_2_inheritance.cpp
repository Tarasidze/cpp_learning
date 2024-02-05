#include <iostream>

// Public, private and protected inheritance


struct Granny {
    protected:
        int x;
    public:
        void f() {}
};

struct Mom: Granny {
    friend int main();
    int y;
    void g() {
        std::cout << x;
    }
};


struct Son: Mom {
    int z;
    void h() {
        std::cout << x;
    }
};

int main() {
    Son s;
    std::cout << s.x; // 
}