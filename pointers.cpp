#include <iostream>
#include <vector>


void pointers(){
    int x = 777;
    std::cout << &x << "\n";
    int* p = &x;
    std::cout << *p;
    std::cout << std::endl;

    std::vector<int> v = {55, 66, 88, 99, 11};
    int* p1 = &v[0];
    p1 += 2;
    std::cout << *++p1;


}


void double_pointers(){ 
    
    int a = 555;
    int* p = &a;
    std::cout << p << "\n";
    int** pp = &p;
    std::cout << pp << "\n";

    std::cout << sizeof(p) << "\n";

    std::cout << *pp << "\n";
    std::cout <<  " " << **pp << "\n";

    *p = 99;
    std::cout << *p << "\n";

    std::cout << &(++a);
}


void memory_reuse(){
    int a = 1;
    int* p = &a;
    {
        int b = 2;
        p = &b;
    }

    std::cout << p << "\n";
    std::cout << *p << "\n";
    
    int c = 3;
    int d = 4;
    int e = 5;
    int f = 6;
    int g = 7;
    int h = 8;
    int r = 9;
    int t = 10;
    int w = 11;

    std::cout << &c << " " << &d << " " << &e << " " << &f << " " << &g << " " << &h << " " << &r << " " << &t << " " << &w << "\n"; 

    ++*p;

    std::cout << c << " " << d << " " << e << " " << f << " " << "\n";
    std::cout << *p << "\n";
}


void pointers_ub (){
    int x = 5;
    int y = 1;
    int* p = &x;
    *++p; //UB

    std::cout << *++p << " \n";    
    std::cout << *++p << " \n";

}


void swap_point(int* x, int* y){
    int tmp = *x;
    *x = *y;
    *y = tmp; 
}


void swap(int* x, int* y){
    
    scanf("%d", &y);
    
    swap_point(x, y);

    std::cout << y << " " << " \n";
}


void int_to_point(){
    int x = 55;
    int* p = &x;

    int z = 2423442;

    std::cout << *(double*)z;
}


int main(){
    int_to_point();

}