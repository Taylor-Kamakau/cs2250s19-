/*
 * =====================================================================================
 *
 *       Filename:  students.c
 *
 *    Description:  create a dynamically allocate structure
 *
 *        Version:  1.0
 *        Created:  03/21/2019 08:44:47 AM
 *       Revision:  none
 *       Compiler:  gcc students.c -o students.out
 *
 *         Author:  Taylor Kamakau (), taylorkamakau@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constants
#define MAX 50
typedef struct Student
{
    char fName[50];
    int idNum;
    struct Student* next;
} Student;

// Function Prototypes
void AddStudent(Student* thisStudent, char name[], int id, Student* newStudent);
void LinkStudent(Student* thisStudent, Student* newStudent);
void DisplayStudent(const Student* st);

// Main Function
int main(int argc, char* argv[])
{
    int id = 0;
    char name[MAX] = "";
    //Student st;
    char ans = 'y';
    char dummy;
    Student *headRec = NULL;
    Student *nextRec = NULL;
    Student *currentRec = NULL;

    printf("Student %d\n", id + 1);
    id = id +1;
    printf("Enter your name:\n:");
    fgets(name, MAX, stdin);
    name[strlen(name) - 1] = '\0'; // Eliminate EOL character
    // Save it to a Student struct
    AddStudent(&st, name, id);
    printf("Do you want another record [y|n]:");
    scanf("%c%c", &ans, &dummy);
    fflush(stdin);
    DisplayStudent(&st);

    printf("Hi [%s] student with id[%d]\n", name, id);

    return 0;
}
// Function Definitions
// function AddStudent
void AddStudent(Student* thisStudent, char name[], int id)
{
    strcpy(thisStudent->fName, name);
    thisStudent->idNum = id;
    return;
}
//function displayStudent
void DisplayStudent(const Student* st)
{
    printf("Hi [%s] student with id[%d]\n", st->fName, st->idNum);
    return;
}

