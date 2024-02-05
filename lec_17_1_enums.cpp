#include <iostream>
// Enums and enum class


enum class En {
    White,
    Gray,
    Black
};


int main() {
    En e = En::Gray;
    std::cout << static_cast<int>(e);
}