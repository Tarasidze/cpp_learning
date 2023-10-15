#include <iostream>


int x = 50;

int main() {
    int x = 25;

    std::cout << "Hello";
    std::cout << std::endl;

    for(int i = 0;  i < 10; ++i){
        
        int x = i;
        std::cout << x << " ";

    }

    std::cout << std::endl;


    std::cout << x;
    std::cout << std::endl;

    std::cout << ::x;
    std::cout << std::endl;
    

    system("pause");

    return 0;
}

