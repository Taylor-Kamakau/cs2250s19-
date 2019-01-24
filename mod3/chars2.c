/*
 * =====================================================================================
 *
 *       Filename:  chars2.c
 *
 *    Description:  More characters fixtures
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:04:52 AM
 *       Revision:  none
 *       Compiler:  gcc chars2.c -o chars2.out
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
    char c = '0';

    printf("c is %c\n", c);
    printf("c is %d\n", c);
    printf("c is %x\n", c);
    printf("Enter the first letter of your first name: \n");
    scanf("%c", &c);
    printf("Your initial is [%c]\n", c);

    return 0;
}
    

// Function Definitions


