/*
 * =====================================================================================
 *
 *       Filename:  read_bin.c
 *
 *    Description:  read from a binary file
 *
 *        Version:  1.0
 *        Created:  03/28/2019 09:05:36 AM
 *       Revision:  none
 *       Compiler:  gcc  read_bin.c-o read_bin.out
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
    if((fptr = fopen("program.bin", "rb")) == NULL)    // for rb: read binary
    {
        printf("Error!. Could not open file for writting\n");
        exit(1);
    }
    // reading  to file 
    for(int n = 1; n < 5; n++)
    {
        nums.n1 = n;
        nums.n2 = 5*n;
        nums.n3 = 5*n + 1;
        // to read binary data use: 
        // fread(address_data, size_data, numbers_data, pointer_to_file)
        fread(&nums, sizeof(ThreeNumbers), 1, fptr);
        // we should have the data loaded into the structure
        printf("n1:%d\t n2:%d\t n3:%d\n", nums.n1, nums.n2, nums.n3);
    }// end of loop


    return 0;
}
// Function Definitions


