// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

using namespace std;

enum class cow_purpose {dairy, meat, hide, pet};

struct cow{
    string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = cow_purpose::dairy;
    cout<<"Cow's name : "<<my_cow.name<<endl;
    cout<<"Cow's age : "<<my_cow.age<<endl;
    cout<<"Cow's purpose : "<<(int)my_cow.purpose<<endl;
    cout << std::endl << endl;
    return (0);
}
