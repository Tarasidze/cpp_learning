#include <iostream>
#include <map>
#include <typeinfo>


template <typename T>
void swap(T x, T y) {
    T t = x;
    x = y;
    y = t;
}


template <typename T>
T max(T x, T y) {
    return x > y ? x : y;
}


template <typename T>
class my_vector {
    T* arr;
    size_t sz;
    size_t cap;
};


template <typename T>
struct my_greater {
    bool operator()(const T& x, const T& y) const {
        return x > y;
    }
};


template <typename T>
using my_map = std::map<T, T, std::greater<T>>;

my_map<int> m;


int main() {

    long long l_b = 2;
    long long l_a = 3;

    int a = 0;
    int b = 1;

    swap(a, b);
    swap<long long>(a, b);

    std::cout << "a: " << a << "\n" << "b: " << b;



    return 0;
}