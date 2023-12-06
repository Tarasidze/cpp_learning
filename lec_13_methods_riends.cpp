#include <iostream>
#include <cstring>


class C {
private:
    int x{5};
public:
    void f(int y) {
        std::cout << x + y << "\n";
    }

    friend void g(C, int);
    friend class CC;

};

void g(C c, int y) {
    std::cout << c.x + y + 1;
}


class Complex {
public:
    double re = 0.0;
    double im = 0.0;

    // Complex(double real) {
    //     re = real;
    // }

    Complex(double real): re(real) {
        // this -> re  = real;
    }
    Complex(double re, double im): re(re), im(im){}
};


class String {
    char* arr = nullptr;
    size_t sz = 0;
    size_t cap = 0;

public:
    String() = default;
    // String() {} // default constructor
    String(size_t n, char c): arr(new char[n + 1]), sz(n), cap(n + 1) {
        memset(arr, n, c);
        std::fill(arr, arr + sz, c);
        arr[sz] = '\0';
    }
    String(std::initializer_list<char> list)
            : arr(new char[list.size()])
            , sz(list.size())
            , cap(sz + 1) {
        std::copy(list.begin(), list.end(), arr);
        arr[sz] = '\0';
    }

};


int main() {

    String s = {'a', 'b', 'c', 'd'};

    C cc;
    std:: cout << (int&)cc;

    Complex c(5.0);
    Complex c2 = 6.0;
    Complex c3{7.0};
    Complex c4 = {8.0};

}