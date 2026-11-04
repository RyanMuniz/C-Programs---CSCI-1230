/*************************************************************************
// Name: Ryan Muniz
// Email: rmuniz15@student.cnm.edu
// Date: November 4, 2026
// Class: C Programming
// Assignment: Exam 2
// Purpose: Print alternating letters from a char array
// File Name: "p1.c"
**************************************************************************/

#include <stdio.h>

int main(void) {
    // Output header
    printf("=========================\n");
    printf("Name: Ryan Muniz\n");
    printf("Email: rmuniz15@student.cnm.edu\n");
    printf("Purpose: Print alternating letters from char array\n");
    printf("File Name: p1.c\n");
    printf("=========================\n");

    // Store letters in a char array
    char letters[] = "wfartieernfdaslhlisp";
    int i;
    // Print every other letter starting at index 0
    for (i = 0; i < 20; i += 2) {
        printf("%c", letters[i]);
    }
    printf("\n");
    // Print every other letter starting at index 1
    for (i = 1; i < 20; i += 2) {
        printf("%c", letters[i]);
    }
    printf("\n");
    return 0;
}