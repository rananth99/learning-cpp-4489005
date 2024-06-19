// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

int main(){
    std::vector<cow> my_cows;
    my_cows.push_back(cow("Bitsy", 4, cow_purpose::hide));
    my_cows.push_back(cow("Gritty", 7, cow_purpose::pet));
    my_cows.push_back(cow("Haely", 5, cow_purpose::dairy));
    std::cout << std::endl << std::endl;
    return (0);
}
