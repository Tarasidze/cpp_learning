#include <iostream>


void do_reinterpret_cast() {
    int x = 777;
    int* p  = &x;

    //undefine begaviour    
    std::string* str = reinterpret_cast<std::string*>(p);
    std::cout << *str << " \n";
}

// 
void do_static_cast(){
    int x = 5;
    std::cout << typeid(x).name() << "\n";
    double c = static_cast<double>(x);
    std::cout << typeid(c).name() << "\n";

    long long y = 1729;
    std::cout << reinterpret_cast<double&>(y) << "\n";
    std::cout << typeid(y).name() << "\n";
    
}


int main() {
    do_reinterpret_cast();
}