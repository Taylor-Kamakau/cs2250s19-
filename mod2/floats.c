/*
 * =====================================================================================
 *
 *       Filename:  floats.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/15/2019 09:36:49 AM
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

// Function Prototypes

// Main Function
int main()
{
    float temp = 7.9; // Celsius
    
    double f_temp = 0;
    printf("The termerature is %f Celsius\n", temp);
    printf("What is the temperature in Ogden now: \n");
    // use %f to capture float information
    // use %lf to captue double information
    scanf("%f", temp);
    f_temp = (temp * 9/5) + 32;
    printf("I see, your temp is %lf in F.\n", temp);
    

    return 0;
}
// Function Definitions


