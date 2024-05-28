// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>

using namespace std;

#define CAPACITY 5000
#define DEBUG

int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;
#ifdef DEBUG
    cout << "[About to perform addition]" << endl;
#endif
    large += small;
    cout << "large + small = " << large << endl;

    cout << endl << endl;
    return (0);
}
