#include <iostream>


void constants_basic(){

    int x = 5;
    int y = 6;
    int* p = &x;

    const int* pc = p; // in this cose int is constant but reference not
    // *pc = 1;  // Compile error 
    pc = &y;


    int* const cp = p; // there is integer not a costtant however refference is
    //  cp = &y;  // CE
    *cp = 1;

}


void const_argument(const std::string& str){
    std::cout << str;
}


void const_argument(std::string& str){
    std::cout << str;
}


std::string substr(std::string str, size_t from, size_t to){
    std::cout << str;
    return str;
}


int main() {
    std::string s = "anc";
    const std::string& rs = s;
    const_argument(rs);

    int* p = new int(0);
    int** pp = &p;
    const int** cpp = pp;  // Compile Error
}