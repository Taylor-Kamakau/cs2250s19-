/*
 * =====================================================================================
 *
 *       Filename:  date_struct_better.c
 *
 *    Description:  Use a better way to define your structures
 *
 *        Version:  1.0
 *        Created:  03/12/2019 08:54:21 AM
 *       Revision:  none
 *       Compiler:  gcc date_struct_better.c -o date_struct_better.out
 *
 *         Author:  Taylor Kamakau (), taylorkamakau@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants & Global
typedef struct Date
{
    int month;
    int day;
    int year;
}Date;

// Function Prototypes
//  Make sure you define the struct before you call it
void Hello_Date(Date d1);
// Main Function
int main(int argc, char* argv[])
{
    Date d1;
    d1.month = 12;
    d1.day = 23;
    d1.year = 2018;
    Hello_Date(d1);

    return 0;
}
// Function Definitions
// print the date structure

void Hello_Date(Date d1)
{
    printf("D1 month %d, day %d, year %d\n", d1.month, d1.day, d1.year % 100);
    return;
}
