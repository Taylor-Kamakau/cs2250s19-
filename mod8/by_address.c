/*
 * =====================================================================================
 *
 *       Filename:  by_address.c
 *
 *    Description:  learn how to pass info to functions by reference
 *
 *        Version:  1.0
 *        Created:  02/26/2019 08:35:43 AM
 *       Revision:  none
 *       Compiler:  gcc  by_address.c-o by_address.out
 *
 *         Author:  Taylor Kamakau (), taylorkamakau@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants

// Function Prototypes
void DisplayPosition(double x, double y);
void UpdatePosition(double x, double y, double new_x, double new_y);
void ResetPosition();

    
// Main Function
int main(int argc, char* argv[])
{
    double x, y;
    if(argc != 3)
    {
        printf("Usage: %s <X_POS> <Y_POS>\n", argv[0]);
        return 1;
    }
    x = atof(argv[1]);   // convert the first input param to double
    y = atof(argv[2]);   // convert the second input param to double
    DisplayPosition(x, y);
    UpdatePosition(x, y, 2, 4);
    DisplayPosition(x, y);


    printf("Your initial positon is (%4.2lf,%4.2lf)\n", x, y);
    return 0;
}
// Function Definitions

void DisplayPosition(double x, double y)
{
    printf("Your current position is (%4.2lf, %4.2lf)\n", x, y);
    return;
}

