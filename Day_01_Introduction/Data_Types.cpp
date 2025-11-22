#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    
    bool isTrue = true;
    char ch = 'a';
    string str = "alpha";
    int x = 10;
    float float_pi = 3.141592653589793;
    double double_pi = 3.141592653589793;


    //  We will discuss typeid() function later.

    cout<<isTrue<<" "<<typeid(isTrue).name()<<endl;         // b : Boolean
    cout<<ch<<" "<<typeid(ch).name()<<endl;                 // c : Character
    cout<<str<<" "<<typeid(str).name()<<endl;               // ...basic_string... : String
    cout<<x<<" "<<typeid(x).name()<<endl;                   // i : Integer
    cout<<float_pi<<" "<<typeid(float_pi).name()<<endl;     // f : Float           
    cout<<double_pi<<" "<<typeid(double_pi).name()<<endl;   // d : Double

    return 0;
}