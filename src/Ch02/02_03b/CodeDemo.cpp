// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

using namespace std;

int a, b = 5;

int main(){
    bool my_flag;
    a = 7;
    cout << "value of a: "<< a << endl;
    cout << "value of b: "<< b << endl;
    cout << "value of my_flag: "<< my_flag << endl;
    my_flag = true;
    int sum = b + a, diff = b - a;
    cout << "value of b+a: "<< sum << endl;
    cout << "value of b-a: "<< diff << endl;
    cout << "value of my_flag: "<< my_flag << endl;
    unsigned int positive;
    positive = b - a;
    cout << "b - a (unsigned): " << positive << endl;
    
    cout << endl << endl;
    return (0);
}
