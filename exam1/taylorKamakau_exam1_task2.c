/*
 * =====================================================================================
 *
 *       Filename:  taylorKamakau_exam1_task2.c
 *
 *    Description:  grades
 *
 *        Version:  1.0
 *        Created:  02/21/2019 09:28:51 AM
 *       Revision:  none
 *       Compiler:  gcc  -o taylorKamakau_exam1_task2.c.out
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
    int manyGrades = 0;
    int grade1 = 0;
    int grade2 = 0;
    int grade3 = 0;
    int grade4 = 0;
    int totGrade = 0;
    
    printf("how many grades will you be entering?\n");
    scanf("%d", &manyGrades);
    printf("Enter grade #1:");
    scanf("%d\n", &grade1);
    printf("Enter grade #2:");
    scanf("%d\n", &grade2);
    printf("Enter grade #3:");
    scanf("%d\n", &grade3);
    printf("Enter grade #4:");
    scanf("%d\n", &grade4);

    totGrade = (grade1 + grade2 + grade3 + grade4)/ 4;

    printf("Grade average: %d\n", totGrade);

    




    return 0;
}
// Function Definitions


