/*************************************************************************
// Name: Ryan Muniz
// Email: rmuniz15@student.cnm.edu
// Date: November 17, 2026
// Class: C Programming
// Assignment: Lab 13
// Purpose: Demonstrate how to declare, assign, and display data
// using a structure in C.
// File Name: "lab13structures.c"
**************************************************************************/

#include <stdio.h>

struct StudentData{
    int student_id;
    char *student_name;
    int student_age;
};

int main(void) {
    // Output header
    printf("=========================\n");
    printf("Name: Ryan Muniz\n");
    printf("Email: rmuniz15@student.cnm.edu\n");
    printf("Purpose: Demonstrate structures in C.\n");
    printf("File Name: lab13structures.c\n");
    printf("=========================\n");
    printf("\n");

    // Declare a variable of type struct StudentData
    struct StudentData example_data;
     
    // Assigning the values of each struct member here
    // The dot operator accesses individual structure members
    example_data.student_name = "Steve";
    example_data.student_id = 1234;
    example_data.student_age = 30;

    // Displaying the values of struct members
    // %s prints a string, while %d prints an integer
    printf("Student Name is: %s", example_data.student_name);
    printf("\nStudent Id is: %d", example_data.student_id);
    printf("\nStudent Age is: %d\n", example_data.student_age);

    return 0;
}