/*
 * =====================================================================================
 *
 *       Filename:  cartesian.c
 *
 *    Description:  calculate cartesian coordinate based on radius and angle
 *
 *        Version:  1.0
 *        Created:  01/24/2019 08:36:38 AM
 *       Revision:  none
 *       Compiler:  gcc caresian.c -o cartesian.out -lm
 *
 *         Author:  Taylor Kamakau (), taylorkamakau@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
// Constants
const double PI = 3.14159;
// Function Prototypes

// Main Function
int main()
{
   double Degree =0;
    double Radius = 0;
    double Radians = 0;
    double x_pos;
    double y_pos;

    // 1) capture user input for radius and theta angle(degrees)
    
    // 2) Convert the angle to radians
    // 3) calculate your cartesian coordinates
    // 4) print the result
    printf("What is your radius?\n");
    scanf("%lf", &Radius);
    printf("What is the angle of theta in (degrees):");
    scanf("%lf", &Degree);
    Radians = (Degree * PI / 180.0);
    x_pos = Radius * cos(Radians);
    y_pos = Radius * sin(Radians);
    printf("Your Cartesian Coordinates, x = [%6.2lf]\n", x_pos);
    printf("Your Cartesian Coordiantes, y = [%6.2lf],\n", y_pos);
    return 0;
}
// Function Definitions


