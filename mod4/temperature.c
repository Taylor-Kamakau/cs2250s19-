/*
 * =====================================================================================
 *
 *       Filename:  temperature.c
 *
 *    Description:  Program to calculate temperature
 *
 *        Version:  1.0
 *        Created:  01/29/2019 08:41:43 AM
 *       Revision:  none
 *       Compiler:  gcc temperature.c -o temperature.out
 *
 *         Author:  Taylor Kamakau (), taylorkamakau@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define Celsius 0
#define Fahrenheit 1
#define Boil_Cel 100
#define Boil_Fahr 212
#define Freeze_Cel 0
#define Freeze_Fahr 32
// Function Prototypes

// Main Function
int main()
{
    //float temp = 7.9; // celsius
    double in_temp, out_temp;
    int choice;

    // 1) ask user which temperature mode they want to use
    //
    printf("Welcome to the temperature calculator\n");
    printf("Please enter your choice:\n");
    printf("\t0 for Celsius or 1 for Fahrenheit: ");
    scanf("%d", &choice);
    // 2) Based on choice calculate celsius or fahrenhiet
    if (choice == Celsius)
    {
        printf("Enter the temperature in Celsius: ");
        scanf("%lf", &in_temp);
        out_temp = (in_temp * 9.0/5) + 32;
        printf("Your temperature in Fahrenheit is: %lf\n", out_temp);
    }
    else if (choice == Fahrenheit) {
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%lf", &in_temp);
        out_temp = (in_temp - 32) * 5.0/9.0;
        printf("Your temperature in Celsius is: %lf\n", out_temp);
    }
    else
    {
        printf("Sorry, you did not enter 0 or 1\n Mahalo\n");
     
    }
    // convert from celsius to fahrenheit in_temp * 9.0/5 + 32
    //Task 2:
    // Test for boiling point, freezing point, and liquid point
    if (choice == Celsius) {
        if (in_temp >= Boil_Cel) 
        {
            printf("Your water is boiling\n");
        }
        // && -> and 
        else if (in_temp > Freeze_Cel && in_temp < Boil_Cel)
        { printf("Your water is liquid\n");
        }
        else 
        {
            printf("Your water is ice\n");
        }

    }
    else{ 
        if (in_temp >= Boil_Fahr)
            printf("Your water is boiling\n");
    }


    return 0;
}
// Function Definitions


