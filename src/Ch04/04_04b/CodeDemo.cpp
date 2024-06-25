// Learning C++ 
// Exercise 04_04
// For Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers = {12, 25, 31, 47, 58};
    float average1 = 0.0f;
    for(int i=0; i<numbers.size();i++){
        average1 += numbers[i];
    }
    average1 /= numbers.size();
    std::cout << "Average_1 : " << average1 << std::endl;

    float average2 = 0.0f;
    for(auto x: numbers){
        average2 += x;
    }
    average2 /= numbers.size();
    std::cout << "Average_2 : " << average2 << std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
