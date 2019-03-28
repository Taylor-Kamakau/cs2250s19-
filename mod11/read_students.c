/*
 * =====================================================================================
 *
 *       Filename:  read_students.c
 *
 *    Description:  create and later read studen records from file
 *
 *        Version:  1.0
 *        Created:  03/28/2019 09:44:09 AM
 *       Revision:  none
 *       Compiler:  gcc  -o read_students.c.out
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
    char name[50];
    int marks,  num;
    printf("Enter the number of students: ");
    scanf("%d", &num);
    // Open file to write
    FILE *fptr;
    //ThreeNumbers nums;   // declare a structure variable
    // syntax to open a file: ptr = fopen("fileToOpen", "mode")
   // fptr = fopen("program.bin", "wb");
    // Check if it works
    if((fptr = fopen("students.txt", "rb")) == NULL)    // for writng: 
    {
        printf("Error!. Could not open file for writting\n");
        exit(1);
    }
    // Loop over students
    for(int i = 0; i < num; i++)
    {
        printf("For student %d\nEnter name: ", i+1);
        scanf("%s", name);
        printf("Enter marks: ");
        
        scanf("%d", &marks);
        // write to file 
        fprintf(fptr, "\nName: %s \nMarks=%d \n", name, marks);
    }// end of loop
    fclose(fptr); // close file


    return 0;
}
// Function Definitions


