// Learning C++ 
// Exercise 04_03
// While Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers = {12, 25, 31, 47, 58};
    
    std::vector<int>::iterator ptr = numbers.begin();
    while(ptr != numbers.end()){
        std::cout << *ptr << " ";
        ptr += 1;
    }
    std::cout << std::endl;
    auto p = 0;
    while(p < numbers.size()){
        std::cout << numbers[p] << " ";
        p += 1;
    }
    std::cout << std::endl;
    int i = 0;
    do{
        std::cout << numbers[i] << " ";
        i += 1;
    }while(i < numbers.size());

    std::cout << std::endl << std::endl;
    return (0);
}
