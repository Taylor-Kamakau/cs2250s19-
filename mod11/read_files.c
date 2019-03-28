/*
 * =====================================================================================
 *
 *       Filename:  read_files.c
 *
 *    Description:  Open files for reading purposes
 *
 *        Version:  1.0
 *        Created:  03/28/2019 08:48:21 AM
 *       Revision:  none
 *       Compiler:  gcc  -o read_files.c.out
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

// Main Function
int main(int argc, char* argv[])
{
    FILE *fptr;
    int num;
    // syntax to open a file: ptr = fopen("fileToOpen", "mode")
    //fptr = fopen("program.txt", "w");
    // Check if it works
    if((fptr = fopen("program.txt", "r")) == NULL) // for reading
    {
        printf("Error!. Could not open file for writting\n");
        exit(1);
    }
    // Beging reading from file
    fscanf(fptr, "%d", &num);
    printf("Read %d from input file\n", num);

    // close file
    fclose(fptr);


    return 0;
}
// Function Definitions


