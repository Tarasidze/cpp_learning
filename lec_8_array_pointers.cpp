#include<iostream>
#include<algorithm>


void bare_arrays(){
    int a[5] = {1, 2, 3, 4, 5};
    std::cout << *(a + 3);

    int* p = a + 3;
    std::cout << p[-1];

    std::cout << 2[a]; 

    int* b[5]{};
    std::cout << *b << " \n";
}

void dynamic_arrays(){
    int* a = new int[10];
    std::cout << *(a-2) << "\n";
    delete[] a;
}


void veriable_length_array(){
    int n;
    std::cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i ){
        a[i] = i;
        std::cout << a[i] << "\n";
    }
}


void c_style_sring(){
    const char* s = "asd\0asd";
    for (int i = 0; i < 15; ++i){
        std::cout << s[i] <<  " \n";
    }

}


void two_dimension_array(){
    int a[5][5];  // two dimention array

    int* b[5];  // Array of 5 pointers to int 

    int (*c)[5];  // Pointer to array of 5 ints


}


bool comparator(int x, int y){
    return x > y;
}


void func_pointers(){
    int a[5] = {1, 2, 3, 4, 5};
   
    bool (*p)(int, int) = &comparator;

    std::cout << (void*)p << "\n\n";

    std::sort(a ,a + 5, comparator);  // function as pointer

    for (int i = 0; i < 5; ++i){
        std::cout <<  a[i] << "\n";
    }
}

void f(int) {}
void f(double) {}

void func_overloading(){

    void (*p)(int) = &f;
    void (*p2)(double) = &f;

    std::cout << (void*)p << "\n" << (void*)p2 << "\n";

}


int main() {

    func_overloading();

}