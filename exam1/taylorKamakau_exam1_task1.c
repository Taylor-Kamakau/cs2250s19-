/*
 * =====================================================================================
 *
 *       Filename:  taylorKamakau_exam1_task1.c
 *
 *    Description:  Task 1 wrint progrram for money
 *
 *        Version:  1.0
 *        Created:  02/21/2019 08:36:18 AM
 *       Revision:  none
 *       Compiler:  gcc taylorKamakau_exam1_task1.c  -o taylorKamakau_exam1_task1.out
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
int main(int argc, char* argv[])
{
    int money = 0;

    printf("Input how much money?\n");
    scanf("%d", &money);
    
    if(money <= 5000)
    {
        printf("With this amount of money you can buy a TV\n");
    }
    if(money > 5000 && money <= 10000)
    {
        printf("With this amount of money you can buy a RTV\n");
    }
    if(money > 10000 && money <= 50000)
    {
        printf("With this amount of money you can buy a car\n");
    }
    if(money > 50000)
    {
        printf("With this amount of money you can buy a small house\n");
    }
    return 0;
}
// Function Definitions


