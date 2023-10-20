#include <cstdint>
#include <iostream>
#include <string>

int16_t x = 1;


void operators(){

    std::string str = "======sdfsdfsdfsdfsd=======------";

    int y = 2;

    int c = ++(y = 5);

    int a = ++++x;

    int b = a+++x;

    std::cout << "x: " << ::x;
    std::cout << std::endl;

    std::cout << "c: " << c;
    std::cout << std::endl;

    std::cout << "b: " << b;
    std::cout << std::endl;

    std::cout << str;
    std::cout << std::endl;
}

int main(){

    std::uint8_t val = 255;

    std::cout << val;
    std::cout << std::endl;

    std::cout << sizeof(val);
    std::cout << std::endl;

    ++val;

    std::cout << val;
    std::cout << std::endl;



    return 0;
}
