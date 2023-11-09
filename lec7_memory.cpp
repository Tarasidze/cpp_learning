#include <iostream>


void new_memory(){
    int* p = new int;
    *p = 1;
    std::cout << *p << "\n";
    *p = 5;
    delete p;

    int* pa = new int[10000];

    pa[5] = 7;
    std::cout << pa[0] << "\n";
}


void memory_leak(){
    int*p = new int(5);
    std::cout << p << " " << *p << "\n";
    //delote p;
}


int main(){

    
}