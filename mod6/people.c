/*
 * =====================================================================================
 *
 *       Filename:  people.c
 *
 *    Description:  analyze persons records
 *
 *        Version:  1.0
 *        Created:  02/14/2019 08:36:17 AM
 *       Revision:  none
 *       Compiler:  gcc people.c -o people.out
 *
 *         Author:  Taylor Kamakau (), taylorkamakau@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constants
#define PERSONS   5
#define ATTRI   3
#define AGE   0
#define WEIGHT 1
#define HEIGHT 2

// Function Prototypes

// Main Function
int main()
{
    double people[PERSONS][ATTRI];
    srand(time(0));  // set random seed

    for(int i = 0; i < PERSONS; i++)
    {
        for(int j = 0; j < ATTRI; j++)
        {
            if(j == AGE)
            {
                people [i][j] = rand() % 50; // set age 0-50
            }
            else if (j == WEIGHT)
            {
                people[i][j] = rand() % 200;   // set weight 0-200 kg
            }
            else if (j == HEIGHT)
            {
                people[i][j] = rand() % 200;  // set HEgiht to 0-200 in cm
            }
        }
    }
    // now display the information
    for(int row = 0 ; row < PERSONS; row++)
    {
        printf("%d person information\n", row + 1);
        for(int col = 0; col < ATTRI; col++)
        {
            switch(col)
            {
                case AGE:
                    printf("Your age is %6.0lf\n", people[row][col]);
                    break;
                case WEIGHT:
                    printf("Your weight is %6.2lf\n", people[row][col]);
                    break;
                case HEIGHT:
                    printf("Your height is %6.2lf\n", people[row][col]);
                    break;
            } // end of switch
        }       //end of col loop
        printf("Done with atrributes\n");
    }       //end of row loop
    printf("Done with persons\n");

            
    return 0;
}
// Function Definitions


