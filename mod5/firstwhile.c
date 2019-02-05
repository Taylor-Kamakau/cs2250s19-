/*
 * =====================================================================================
 *
 *       Filename:  firstwhile.c
 *
 *    Description:  learn while loops
 *
 *        Version:  1.0
 *        Created:  02/05/2019 08:36:53 AM
 *       Revision:  none
 *       Compiler:  gcc firstwhile.c -o firstwhile.out
 *
 *         Author:  Taylor Kamakau (), taylorkamakau@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define MAXCOUNT 4
// Function Prototypes

// Main Function
int main()
{
    //Task 1: calculate the average of user input values
    int count = 0;
   float grade, avg;
   float total = 0;

    while(count < MAXCOUNT)
    {
        printf("\nEnter %d hw grade(0-100): ", count + 1);
        scanf("%f", &grade);

        total += grade; // add up grades
        count++; // udate  test condition: sentinel
    }

    avg = total/MAXCOUNT;
    printf("Your avg is [%6.2f]\n", avg);


    printf("\nMahalo\n");
    return 0;
}
// Function Definitions


