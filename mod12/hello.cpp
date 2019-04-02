/*
 * =====================================================================================
 *
 *       Filename:  hello.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/02/2019 08:52:14 AM
 *       Revision:  none
 *       Compiler (c): gcc  -o hello.cpp.out
        Compiler(c++):  g++  -o hello.cpp.out

 *
 *         Author:  Taylor Kamakau (), taylorkamakau@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C code
//#include <stdio.h>
//#include <stdlib.h>

// For C++ Code 
#include <iostream>
using namespace std;

// Constants

// Function Prototypes



// Main Function
int main(int argc, char* argv[])
{
    int num;
    // Print out
    cout << "Hello C++" << endl;
    cout << "Enter a number: " << endl;
    // for input use: cin
    cin >> num;
    cout << "You entered: " << num << " number." <<endl;
    return 0;
}
// Function Definitions


