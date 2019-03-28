/*
 * =====================================================================================
 *
 *       Filename:  write_bin.c
 *
 *    Description:  Write binary
 *
 *        Version:  1.0
 *        Created:  03/28/2019 08:54:26 AM
 *       Revision:  none
 *       Compiler:  gcc  -o write_bin.c.out
 *
 *         Author:  Taylor Kamakau (), taylorkamakau@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants
typedef struct threeNum
{
    int n1;
    int n2;
    int n3;
}ThreeNumbers;
// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    FILE *fptr;
    ThreeNumbers nums;   // declare a structure variable
    // syntax to open a file: ptr = fopen("fileToOpen", "mode")
   // fptr = fopen("program.bin", "wb");
    // Check if it works
    if((fptr = fopen("program.bin", "wb")) == NULL)    // for wb: write binary
    {
        printf("Error!. Could not open file for writting\n");
        exit(1);
    }
    // write to file 
    for(int n = 1; n < 5; n++)
    {
        nums.n1 = n;
        nums.n2 = 5*n;
        nums.n3 = 5*n + 1;
        // to write binary data use: 
        // fwrite(address_data, size_data, numbers_data, pointer_to_file)
        fwrite(&nums, sizeof(ThreeNumbers), 1, fptr);
    }// end of loop

    // close file
    fclose(fptr);

    return 0;
}
// Function Definitions


