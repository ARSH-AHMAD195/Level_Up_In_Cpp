
// Boiler Plate - Bioler Plate code is the basic code template which is written in every code.

#include <iostream>             //Line 1
using namespace std;            //Line 2

int main(){                     //Line 3
    cout<<"Hello World"<<endl;        //Line 4
    return 0;                   //Line 5
}



// Line 1: Header File Library 
// ===========================
//     - Header files add functionality to C++ programs.
//     - #include <iostream> is a header file library that lets us work with input and output objects.

// Line 2: Namespaces 
// ==================
//     - Namespaces are used to use names directly.
//     - using namespace std; means that we can use names for objects and variables from the standard library.

// For Example: if we don't use namespace std then the standard library functions can be accessed by scope resolution operator (::)
//             std::cout<<"Hello World";

// Line 3: Primary Entry Point Of Program 
// ======================================
//     - The thing that always appear in a C++ program is int main().
//     - This is called a function. 
//     - Any code inside its curly brackets {} will be executed.

// Line 4: Statements
// ==================
//     - cout (pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text and endl for endline.
//     - C++ is case-sensitive: "a" and "A" has different meaning.
//     - Every C++ statement ends with a semicolon ;.

// Line 4: Return Statement
// ========================
//     - Every function has a return type.
//     - return 0; In this case main() funtion is of int type so we return an integer 0.