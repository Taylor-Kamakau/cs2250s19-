/*
 * =====================================================================================
 *
 *       Filename:  charsChoice.c
 *
 *    Description:  Use conditionals
 *
 *        Version:  1.0
 *        Created:  01/22/2019 10:11:38 AM
 *       Revision:  none
 *       Compiler:  gcc charsChoice.c -o charsChoice.out
 *
 *         Author:  Taylor Kamakau (), taylorkamakau@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    char letter;
    printf("Enter the grade you want for this class\n");
    printf("Your choices are: 'A'\t'B'\t'C'\n");
    printf("\t\t\t'D' or 'F'\n");
    scanf("%c", &letter);
    printf("To get an [%c], you need the following grade:\n", letter);
    
    return 0;
}
// Function Definitions


