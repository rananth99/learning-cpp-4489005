// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"Hello, World !!"<<endl;
    string str;
    cout<<"What is your name?"<<flush;
    cin>>str;
    cout<<"Hello "<<str<<". Hope you are doing fine!!";
    cout<<endl<<endl;

    return{0};
}