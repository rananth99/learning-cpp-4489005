// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

using namespace std;

int main(){
    
    float flt;
    int32_t sgn;
    uint32_t usgn;

    flt = -7.66f;
    sgn = flt;
    usgn = sgn;

    cout << "Float : " << flt << endl;
    cout << "Signed Int : " << sgn << endl;
    cout << "Unsigned Int : " << (int32_t)usgn << endl;
    cout << endl << endl;
    return (0);
}
