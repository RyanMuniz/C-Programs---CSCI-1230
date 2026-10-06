/*************************************************************************
// Name: Ryan Muniz
// Email: rmuniz15@student.cnm.edu
// Date: October 5, 2026
// Class: C Programming
// Assignment: Exam 1
// Purpose: Returns an animal depending on number chosen by user.
// File Name: "animal_choice.c"
**************************************************************************/

#include <stdio.h>

int main(void) {

    // Declare variable to store user's input
    int choice;

    // Output header
    printf("=========================\n");
    printf("Name: Ryan Muniz\n");
    printf("Email: rmuniz15@student.cnm.edu\n");
    printf("Purpose: Returns an animal depending on number chosen by user.\n");
    printf("File Name: animal_choice.c\n");
    printf("=========================\n");

    // Asks the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &choice);

    // Check the user's choice and print the corresponding animal
    if (choice == 1) {
        printf("cat\n");
    }
    else if (choice == 2) {
        printf("dog\n");
    }
    else if (choice == 3) {
        printf("bird\n");
    }
    else {
        printf("fish\n");
    }
    // Indicates successful completion of program
    return 0;
}