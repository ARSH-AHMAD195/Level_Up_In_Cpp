#include <iostream>             
using namespace std;            

int main(){
    
    // Variables - Variables are containers for storing data values.
    // To create a variable, specify the type and assign it a value:

    // Syntax
    // type variableName = value;

    // Examples
    int apples = 5;
    bool isRaining = false;
    char ch = '$';
    string name = "Alice";
    float tyre_pressure = 33.4;
    double pi = 3.141592653589793;

    // Multiple Variable Decalration
    // =============================
    // To declare more than one variable of the same type, use a comma-separated list:
    int cord_X = 0, cord_Y = 2, cord_Z = 5;

    // You can also assign the same value to multiple variables in one line:
    int cord_X, cord_Y, cord_Z;
    cord_X = cord_Y = cord_Z = 0;

    // All C++ variables must be identified with unique names.
    // These unique names are called identifiers.
    // The general rules for naming variables are:
    //    - Names can contain letters, digits and underscores
    //    - Names must begin with a letter or an underscore (_)
    //    - Names are case-sensitive (myVar and myvar are different variables)
    //    - Names cannot contain whitespaces or special characters like !, #, %, etc.
    //    - Reserved words (like C++ keywords, such as int) cannot be used as names

    // Constants
    // =========
    // Variables whose value we don't want to update, we declare that variable as constant with keyword const.
    // Any contant variable must be initialized at the time of declaration.
    // Example: const double pi = 3.14159;
    return 0;                   
}