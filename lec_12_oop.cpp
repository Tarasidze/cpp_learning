#include <iostream>


struct S {
    int x;
    double d = 3.14;

    
    
    void f(int y) {
        std::cout << x + y;
        ff();

    }
    void fff();
    void ff(){
        this -> x;
    }

    void f_this() {
        std::cout << this -> x;
    }

};

void S::fff(){
    std::cout << x;
}


struct AA {
    int x;
    double d = 3.14;

    struct AAA {
        char c;
    };

    AAA cc{'s'};


};


int main() {

    S s{2, 4}; // Aggregate initialization    

    using AAA = AA::AAA;
    AAA a;

    a.c = 'a';

    std::cout << a.c << "\n";

    // AA aa;

    // std::cout << sizeof(aa) << "\n";



    
    

}
