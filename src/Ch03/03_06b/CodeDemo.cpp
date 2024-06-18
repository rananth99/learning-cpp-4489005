// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    int a = 37;
    int *ptr;
    ptr = &a;

    std::cout << "contents of variable a : "<<a<<std::endl;
    std::cout << "pointer ptr pointing to : "<<ptr<<std::endl;
    std::cout << "address of variable a : "<<&a<<std::endl;
    std::cout << "contents of pointer ptr : "<<*ptr<<std::endl;
    std::cout << "address of pointer ptr : "<<&ptr<<std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
