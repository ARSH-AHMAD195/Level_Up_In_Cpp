#include <iostream>
using namespace std;

int main(){
    string fname, lname;    
    cin>>fname>>lname;

    string full_name = fname + " " + lname; 
    
    cout<<"Hello, "<<full_name;
    return 0;
}

// C++ User Input 
// ==============

// In cpp we take input by cin followed by (>>) extraction operator.
// In our case we have taken fname and lname (cin>>fname>>lname;).

// C++ User Output 
// ===============

// The cout object, together with the << operator, is used to output values and print text.
// In our case we have printed full_name (cout<<"Hello, "<<full_name;).
// We can also use cout() to print numbers.
// However, unlike text, we don't put numbers inside double quotes ("")

// Escape Sequence 
// ===============
// Escape sequences are combinations of characters that represent special, non-printable, or hard-to-type characters in programming.
// Some of the common escape sequences are mentioned below:
// \n  Inserts a newline
// \t	Creates a horizontal tab	
// \\	Inserts a backslash character (\)	
// \"	Inserts a double quote character