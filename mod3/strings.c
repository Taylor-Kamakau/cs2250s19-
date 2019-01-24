/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  Learn how to use strings
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:50:30 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Kamakau (), taylorkamakau@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>


// Constants
const int SIZE = 5;
// Function Prototypes

// Main Function
int main()
{
    // A string is a list/collection of characters (array)
    // Strings us %s as the placeholder
    char fName[SIZE];

    printf("Please enter your name (< 50 characters and no spaces): ");
    // When using arrays, Do NOT include the '&' operater in scanf
    scanf("%s", fName);
    printf("Hi [%s]\n", fName);

    return 0;
}
// Function Definitions


