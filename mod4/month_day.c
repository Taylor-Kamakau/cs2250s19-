/*
 * =====================================================================================
 *
 *       Filename:  month_day.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/31/2019 09:22:53 AM
 *       Revision:  none
 *       Compiler:  gcc month_day.c -o month_day.out
 *
 *         Author:  Taylor Kamakau (), taylorkamakau@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define January   1
#define February   2
#define March   3
#define April   4
#define May   5
#define June   6
#define July   7
#define August   8
#define September   9
#define October   10
#define November    11
#define December   12

// Function Prototypes

// Main Function
int main()
{
    int month;
    int day;
    char answer;

    while(1)
    {
    // 1) Capture user input
    printf("Please enter a month(1-12):\n");
    scanf("%d", &month);
    printf("\nPlease enter the day: ");
    scanf("%d", &day);
    
    // 2) use IF to validate month
    if(month > 12 || month < 1)
    {
        printf("You have entered an invalid month\n");
    }
    // 3) Use switch to validate day of the month
    switch(month) 
    {
        // Months with 31 days
        // day > 31 || day < 1
        case January:
        case March:
        case May:
        case July:
        case August:
        case October:
        case December:
            if(day > 31 || day < 1)
            {
                printf("Invalid day\n");
                return 1;
            }
            break;
            // Months with 30 days
            // day > 30 || day < 1
        case April:
        case June:
        case September:
        case November:
            if(day > 30 || day < 1);
            {
                printf("Invalid day\n");
                return 1;
            }
            break;
            // February day > 28 || day < 1
        case February:
            if(day > 28 || day < 1);
            {
                printf("Invalid day\n");
                return 1;
            }
            break;
        }
        printf("Your entered a valid month[%d] and day[%d] values.\n", 
                month, day);

        printf("\n\nDo you want to continue? [y|n]: ");
        scanf(" %c", &answer);
        if(answer != 'y' && answer != 'Y')
        {
            printf("Answer is [%c]\n", answer);
            break;// exit loop
        }

    }// end of while line
    printf("Mahalo\n");


            return 0;
    }
// Function Definitions


