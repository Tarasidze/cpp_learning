#include <iostream>
#include <string>
#include<assert.h>
// Const, static,  and explosit methods


struct S {
    int x = 5;

    char arr[10]{0}; 

    void f() const {
        // ++x; // not elloved change non field from const method
        std::cout << "Hi const" << "\n";
    }

    void f() {
        std::cout << "Hi NON cinst" << "\n";
    }

    char& operator[](size_t index) {
        return arr[index];
    }
    
    const char& operator[](size_t index) const {
        return arr[index];
    }


};


struct Str {
    int x = 1;
    int& r = x;

    void f(int y) const {
        r = y;
        std::cout << 1 << "\n";
    }

    void f() {
        std::cout << 2 << "\n";
    }
};



int main () {

    std::string s = "abc";
    const std::string cs = s;
    const char& c = cs[0];
    s[0]  ='b';
    // std::assert(c == 'b');
    
    const S ss;
    ss.f();

    const Str str;
    str.f(3);
    std::cout << str.x;

}

