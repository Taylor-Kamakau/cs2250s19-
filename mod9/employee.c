/*
 * =====================================================================================
 *
 *       Filename:  employee.c
 *
 *    Description:  Define an employee structure 
 *
 *        Version:  1.0
 *        Created:  03/12/2019 09:10:16 AM
 *       Revision:  none
 *       Compiler:  gcc employee.c  -o employee.out
 *
 *         Author:  Taylor Kamakau (), taylorkamakau@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants
typedef struct Employee
{
    int idNum;
    double payRate;
    double hours;
}Employee;

// Function Prototypes
double CalcNet(Employee emp);   // Pass by value

// Main Function
int main(int argc, char* argv[])
{
    double netPay = 0;
    Employee waldo = {1, 7.50, 20};
    netPay = CalcNet(waldo);
    printf("Hi Waldo, your net pay for %lf hours at %lf rate is %lf\n",
            waldo.hours, waldo.payRate, netPay);


    return 0;
}
// Function Definitions
// calculate net pay based on payrate and hours
double CalcNet(Employee emp)   
{
    return emp.payRate * emp.hours;
}


