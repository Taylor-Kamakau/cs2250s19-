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
#define MAXCOUNT 5
#define MINCOUNT 2
// Function Prototypes

// Main Function
int main()
{
    //Task 1: calculate the average of user input values
    //Task 2: Validate user inpur for 0 to 100 only
    //Task 3: Ask user how many values they need to enter
    //task 4: if user enters a number below MINCOUNT set it MINCOUNT
    //          and if user enters a value greater than MAXCOUNT, set it to MAXCOUNT
    //
    int count = 0;
    float grade, avg;
    float total = 0;
    int student_count = 0;

    printf("How many hw values you want to enter(between %d and %d)? ", MINCOUNT, MAXCOUNT);
    scanf("%d", &student_count);
    if(student_count < MINCOUNT)
    {
        printf("%d is lower than %d. Setting your entry to %d\n", student_count, MINCOUNT,
                MINCOUNT);
        student_count = MINCOUNT;
    }
    if(student_count > MAXCOUNT)
    {
        printf("%d is greater than %d. Setting your entry to %d\n", student_count, MAXCOUNT
                ,MAXCOUNT);
        student_count = MAXCOUNT;
    }




    


    while(count < MAXCOUNT)
    {
        printf("\nEnter %d hw grade(0-100): ", count + 1);
        scanf("%f", &grade);
        if(grade < 0 || grade > 100)
        {
            printf("Invalid input. Please try again\n");
        }
        total += grade;     // add up grades
        count++;            // udate  test condition: sentinel
        if (count == student_count)
        {
            break;                  //reach the student_count
        
        }
    }

    avg = total/MAXCOUNT;
    printf("Your avg is [%6.2f]\n", avg);


    printf("\nMahalo\n");
    return 0;
}
// Function Definitions


