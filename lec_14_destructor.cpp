#include <iostream>
#include <cstring>

// there is no way to use default constructor
struct C {
    int& r;
    const int c;
};

int x = 5;

struct S
{
    int& r = x;
    
    S(int y) {
        r = y;
    }

    S (const S& other);  // copy constructor
};

// undefine behaviour 
struct F {
    const int& r;

    F(): r(5) {}
};

class String {
    char* arr = nullptr;
    size_t sz = 0;
    size_t cap = 0;
private:
    String(size_t n): arr(new char[n + 1]), sz(n), cap(n + 1) {
        arr[sz] = '\0';
    }

public:
    String() = default;
    // String() {} // default constructor

    // Deligate constructor
    // String(size_t n, char c): String(n) {
    //     memset(arr, n, c);
    // }

    String(size_t n, char c): arr(new char[n + 1]), sz(n), cap(n + 1) {
        memset(arr, n, c);
        // std::fill(arr, arr + sz, c);
        arr[sz] = '\0';
    }
    String(std::initializer_list<char> list)
            : arr(new char[list.size()])
            , sz(list.size())
            , cap(sz + 1) {
        std::copy(list.begin(), list.end(), arr);
        arr[sz] = '\0';
    }

    String(const String& other): arr(new char[other.cap]), sz(other.sz), cap(other.cap) {
        memcpy(arr, other.arr, sz + 1);
    }

    // copy and swap idiom
    String& operator=(String other) {
        swap(other);
        return *this;
    }

    void swap(String& other) {
        std::swap(arr, other.arr);
        std::swap(sz, other.sz);
        std::swap(cap, other.cap);
    }

    ~String() {
        delete[] arr;
    }

};



//COW - copy on write



int main() {
    F f;
    std::cout << f.r << "\n";
}