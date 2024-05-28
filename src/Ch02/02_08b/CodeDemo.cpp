// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

using namespace std;

// #define AGE_LENGTH 4

int main(){
    const size_t age_length = 4;
    int age[age_length];
    cout << "Array length = " << age_length <<endl;
    age[0] = 12;
    age[1] = 23;
    age[2] = 34;
    age[3] = 45;
    cout<<"Age of Person 1 : " << age[0] << endl;
    cout<<"Age of Person 2 : " << age[1] << endl;
    cout<<"Age of Person 3 : " << age[2] << endl;
    cout<<"Age of Person 4 : " << age[3] << endl;

    float temperatures[] = {35.6, 36.7, 21.2, 45.0, 27.5};
    cout << "Temperature on day 1 : " << temperatures[0] << endl;
    cout << "Temperature on day 2 : " << temperatures[1] << endl;
    cout << "Temperature on day 3 : " << temperatures[2] << endl;
    cout << "Temperature on day 4 : " << temperatures[3] << endl;
    cout << "Temperature on day 5 : " << temperatures[4] << endl;

    cout << endl << endl;
    return (0);
}
