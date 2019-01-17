/*
 * =====================================================================================
 *
 *       Filename:  ballDropped.c
 *
 *    Description:  Get the distance traveled by a ball when it is dropped 
 *                  from a buliding 
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:07:05 AM
 *       Revision:  none
 *       Compiler:  gcc ballDropped.c -o ballDropped -lm
 *
 *         Author:  Taylor Kamakau (), taylorkamakau@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants
const double GRAVITY = 9.8;  // ms^2
const double BUILDING = 500;
// Function Prototypes

// Main Function
int main()
{
    double time = 0;
    double distance = 0;
    double fromGround = 0;
    // Takr user input: time traveled
    printf("Enter the time: ");
    scanf("%lf", &time);
    // Formula: s = 0.5 g t^2
    distance = 0.5 * GRAVITY * pow(time, 2);
    // Display distance
    printf("After %lf seconds, your ball traveled %lf meters\n", time, distance);
    // Distance from ground in meters
    fromGround = BUILDING - distance;
    printf("The ball is %lf meters from ground \n", fromGround);
    return 0;
}
// Function Definitions


