#include<iostream>


void complicated_pointers(){
    int* a[10];  // array  with 10 pointers to int
    int (*b)[10]; // pointer to array with 10 ints

    void (*pf)(int);  // pointer to function that takes int and raturn void

    void (*pfa[10])(int);  // array with 10 pointers to functions which takes int and return void

    void (*(*pff[10])(int))(int);

}


void refereces() {
    int x = 5;
    int& y = x;  // y - reference to x

    y++;

    int z = 7;

    y = z; // x = z (7)
}


int& int_refer(int& y){
    return ++y;
}


int& broken_refereces(int& y){
    int asd = ++y;
    return y;
}


int& g(){
    int* p = new int(1);
    return *p;
}


void reference_to_pointer(){
    int x = 0;
    int* p = &x;
    int*& p2 = p;  // now p2 is the same as p
    p = new int(5);
    delete p2;
}


void reference_to_function(int){
    std::cout << " ref to func "; 
}


int main(){
    int x = 5;
    std::cout << x << "\n";
    int_refer(x) = 8;    
    std::cout << "after funv: " << x << "\n";


    int& ref = g();
    delete &ref;


    int a[10] = {0, 1, 2 ,3 ,4 ,5};
    int (&b)[10] = a;
    std::cout << b[0] << "\n";


    void (&ggg)(int) = reference_to_function;
    ggg(1);
}