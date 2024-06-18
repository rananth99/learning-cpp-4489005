// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

using namespace std;

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    cow(string name_i, int age_i, cow_purpose purpose_i){
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    }
    string get_name() const{
        return name;
    }
    int get_age() const{
        return age;
    }
    cow_purpose get_purpose() const{
        return purpose;
    }
private:
    string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow("Betsy", 5, cow_purpose::dairy);
    cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << endl;
    cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << endl;
    
    cout << endl << endl;
    return (0);
}
