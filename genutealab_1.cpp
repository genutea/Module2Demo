/**************************************************************************************************\
*    Author: Genute, A.																		       *
*    Class: CST 113                                                                                *
*    Project: Lab 1                                                                        *
*                                                                                                  *
*   Description:                                                                                   *
*   Demonstration of variable creation, arithmetic, simple input and output                        *
*                                                                                                  *
*   Input:                                                                                         *
*   This is where you list any variables the user will enter                                       *
*                                                                                                  *
*   Output:                                                                                        *
*   What will be printed to a file or on the screen                                                *
*   The results of the program if nothing printed                                                  *
*                                                                                                  *
\**************************************************************************************************/

#include <iostream> // Included for the input and output functions.
#include <string> // Included for the use of strings.

using namespace std; // Defining the namespace.

int main() {
    //Variable Block 
    string name = "Athen Genute";
    string email = "genutea@acad.sunybroome.edu";

    float GPA; //GPA
    
    int age; //age

    bool tf = true;
    
    int num1; //grade 1 
    int num2; //grade 2
    int num3; //grade 3
    int num4; //grade 4 
    int num5; //grade 5 

    int age = 19; 

    num1 = 92;
    num2 = 95;
    num3 = 100;
    num4 = 87;
    num5 = 83;

    float average; //average of the 5 grades 

   // gpa = avg * 4

        //print statements   cout <" "< endl 

 

    // Variable Declaration Block
    // Declaration is not the same as initialization
    // This only reserves memory, but does not initialize a value

    int num1; // Negatives
    unsigned int num2; // No negatives
    float num3; // 6-7 decimals of precision
    double num4; // 15-16 decimals of precision
    char ch; // Anything on the keyboard and some other symbols (ASCII)
    string st; // Combination of 0 or more characters with ""
    bool tf; // True or False

    // Assignment and initialization require the =
    // Where I store = what I store
    num1 = 10 - 20;
    num2 = 10 - 20; // Since only + numbers, "wraps" to largest number and then continues
    
    num3 = static_cast<float>(3) / 7; // See below for why cast is needed
    num4 = 3.0 / 7.0;
    
    ch = 'g'; // No quote - uses the ASCII Value, with quote, uses symbol
              // Will only use last symbol in the ' '
    
    st = "This is a string."; // Anything in " " is a string
    
    tf = true; // Any value other than 0 is true

    // Escape characters:
    // \n - newline - '\n' or "\n"
    // \t - tab - '\t' or "\t"
    // \' to print '
    // \" to print "

    // Printing to the "common output" aka cout
    // << "insertion operators"
    // Anything in " " appears exactly as typed
    // Variables are replaced by the value
    // Equations are replaced by the result
    // Combine multiple components using the insertion operator between each
    cout << "num 1 " << num1 << endl;
    cout << "num 2 " << num2 << endl;
    cout << "num 3 " << num3 << endl;
    cout << "num 4 " << num4 << endl;
    cout << "ch " << ch << endl;
    cout << "st " << st << endl;

    // Arithmetic + - * / % (% is only for integers)
    // + - * / work for all numbers, % only works with int

    num1 = 103 % 7; // Remainder of 103 / 7, returns values from 0 to divisor - 1
    cout << "103 mod 7 = " << num1 << endl;
    
    // Standard arithmetic: int & int = int, double & double = double
    // Mixed-mode arithmetic : int & double = double, always goes wider
    cout << "2/3 " << (2 / 3) << endl; // no decimals
    cout << "2/3 " << (2.0 / 3) << endl; // gives decimals

    // casting to number types use static_cast<type>(number)
    // This is temporary and reverts to original form after execution
    cout << "2/3 " << (static_cast<double>(2) / 3) << endl; // temp double & int = double

    // Prompt with specificity
    cout << "Enter an integer (whole number) between 1 and 10: ";

    // Read input from keyboard with extraction operator
    // >> stops reading at whitespace or on error
    // >> "knows" the type and "fails" when unexpected type given
    cin >> num2;

    //Display what was read in to the user
    cout << "You entered " << num2 << endl;

    // Add 1 to num2 and then add 5 to the resulting value
    num2 = ++num2 + 5;
    cout << "Num 2 " << num2 << endl;

    num2 *= 5; // Same as num2 = num2 * 5
    cout << "Num 2 " << num2 << endl;

    return 0; // Indicates execution was done as intended

} // End main
