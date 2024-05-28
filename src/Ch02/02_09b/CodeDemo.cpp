// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    const size_t LENGTH = 35;

    char array_str1[LENGTH] = "Hey guys! ";
    char array_str2[] = "What's up! How are you today?";

    string std_str1 = "Hi everybody! ";
    string std_str2 = "How is the day going so far?";

    strncat(array_str1, array_str2, LENGTH);

    cout << "After concatenation of array strings the result is : " << array_str1 << endl;
    cout << "After concatenation of std strings the result is : " << std_str1 + std_str2 << endl;

    cout << endl << endl;
    return (0);
}
