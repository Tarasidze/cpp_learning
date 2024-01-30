// Operators overloading
#include <iostream>
#include <string>
#include<compare>

struct Complex {
    double re = 0.0;
    double im = 0.0;

    // Operator spaceship
    std::weak_ordering operator <=>(const Complex& other) = default;


    // & - one umpersant only to l-value
    // && - only to r-value
    // without - to both of them
    Complex& operator=(const Complex& other) && { 
        re = other.re;
        im = other.im;
        return *this;
    }

    Complex(double re): re(re) {}
    Complex(double re, double im): re(re), im(im) {}

    // very low speed implementation
    // Complex& operator+=(const Complex& other) {
    //     *this = *this + other;
    //     return *this;
    // }

    Complex& operator+=(const Complex& other) {
        re += other.re;
        im += other.im;
        return *this;

    }

};

std::ostream& operator<<(std::ostream out, const Complex& str);
std::istream& operator>>(std::istream in, Complex& str);


// Arefmetic operators defines outside of the class
// REturn Value Optimization
Complex operator+(const Complex& a, const Complex& b) {
        Complex result = a;
        result += b;
        return result;
    }
// comparison operators
bool operator<(const Complex& a, const Complex& b) {
    return a.re < b.re || a.re == b.re && a.im < b.im;
}

bool operator>(const Complex& a, const Complex&b) {
    return b < a;
}


int main() {
    Complex a(1.0);
    Complex b(2.0);
    Complex c(3.0);
    c += 2.0;
        
    std::cout << c.re; 

}