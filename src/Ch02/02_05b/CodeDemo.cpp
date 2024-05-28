// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

using namespace std;

int main(){
    auto a = 8;
    auto b = 12345678901;
    auto c = 3.14f;
    auto d = 9.8;
    auto e = true;
    auto f = 'c';
    auto g = "C++ Rocks!!";
    cout << "Type of a (" << a << ") : " << typeid(a).name() << endl;
    cout << "Type of b (" << b << ") : " << typeid(b).name() << endl;
    cout << "Type of c (" << c << ") : " << typeid(c).name() << endl;
    cout << "Type of d (" << d << ") : " << typeid(d).name() << endl;
    cout << "Type of e (" << e << ") : " << typeid(e).name() << endl;
    cout << "Type of f (" << f << ") : " << typeid(f).name() << endl;
    cout << "Type of g (" << g << ") : " << typeid(g).name() << endl;
    cout << endl << endl;
    return (0);
}
