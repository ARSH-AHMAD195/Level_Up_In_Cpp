#include <iostream>
using namespace std;

int main(){
    int a, b, personInRoom = 0;
    cin>>a>>b;

    cout<<a+b<<endl;                // Addition
    cout<<a-b<<endl;                // Subtraction
    cout<<a*b<<endl;                // Multiplication
    cout<<a/b<<endl;                // Division
    cout<<a%b<<endl;                // Modulus
    
    cout<<personInRoom++<<endl;     // Increment
    cout<<personInRoom--<<endl;     // Decrement

    return 0;
}

// Unary Arithmatic Operators 
// ==========================

// Increment(++) and Decrement(--) operator are called unary operators.
// They are of two types:
//     ++variable;     Pre-Increment   -> This increament the variable first then variable is processed. 
//     variable++;     Post-Increment  -> This increament the variable after the variable is processed.
// If both pre and post are used in single statement the pre is processed first.

// Let's learn these operator in detail.

// int a = 5;
// int b = a++ + ++a;
// cout<<"a = "<<a<<", b = "<<b;

// In above example:
//   - Step 1: a initialized with 5
//   - Step 2: a updates to 6 by ++a
//   - Step 3: a is added to a and assigns to b (6+6 = 12) 
//   - Step 4: a updates value to 7
//   - Step 5: prints a = 7, b = 12