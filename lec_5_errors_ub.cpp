#include <iostream>
#include <vector>


void undefine_behavior(){
    std::vector<int> x(10);

    x[500000] = 5;

    std::cout << x[-1];
}

// if you set-up your compiler to -O2 you'll recieve overflow integer
void ub_overflow(){
    for (int i = 0; i < 300; ++i){
        std::cout << i << "" << i * 12345678;
        std::cout << std::endl;
    }
}


bool ub_exist_in_table(int v)
{   
    int table[4] = {};
    // return True in one of the first 4 iterations or UB due to out-of-bounds access
    for (int i = 0; i <= 4; ++i)
        {    
            if (table[i] == v)
                return true;
        }

    return false;
    
}


int main(){

    // RE
    // Segmantation fault (segfault)
   
    // int y;  // y = 0

    // std::cin >> y;

    // std::cout << 5 / y;

    std::cout << ub_exist_in_table(4);


}
