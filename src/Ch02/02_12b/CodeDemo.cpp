// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum class cow_purpose {dairy, meat, hide, pet};

int main(){
    int meat = 8;
    cow_purpose a = cow_purpose::meat;

    std::cout << "a = " << (int)a << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
