// Learning C++ 
// Exercise 05_02
// Function Parameters, by Eduardo Corpeño 

#include <iostream>

// pass by value
int square(int x){
    return x * x;
}

// pass by pointers
void swap1(int *x, int *y){
    int temp = *x + *y;
    *x = temp - *x;
    *y = temp - *y;
}

// pass by references
void swap2(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}



int main(){
    int a = 9, b;
    // TODO: square
    b = square(a);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    // TODO: swap
    swap1(&a, &b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    // TODO: swap
    swap2(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
