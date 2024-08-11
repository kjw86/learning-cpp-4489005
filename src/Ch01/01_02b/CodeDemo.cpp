// Learning C++
// Exercise 01_02
// Hello World, by Eduardo Corpeño
// modified by kjw
#include <iostream>
#include <string>

int main(){
    std::string str_name;
    std::cout << "Hi There please enter your first name: " << std::flush;
    std::cin >> str_name;
    std::cout << "Hello " << str_name << ", how are you today?" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
