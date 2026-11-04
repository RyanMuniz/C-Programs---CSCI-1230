/*************************************************************************
// Name: Ryan Muniz
// Email: rmuniz15@student.cnm.edu
// Date: November 4, 2026
// Class: C Programming
// Assignment: Exam 2
// Purpose: Find the largest and second-largest
// values in an integer array 
// File Name: "p4.c"
**************************************************************************/

#include <stdio.h>

int main(void) {
    // Output header
    printf("=========================\n");
    printf("Name: Ryan Muniz\n");
    printf("Email: rmuniz15@student.cnm.edu\n");
    printf("Purpose: Find the largest and second-largest\n");
    printf("values in an integer array");
    printf("File Name: p4.c\n");
    printf("=========================\n");

    // Initialize the array with 10 integers
    int numbers[10] = {
        12, 45, 23, 67, 34, 89, 21, 90, 56, 38
    };
    // Start with the first two numbers
    int largest = numbers[0];
    int secondLargest = numbers[1];
    int i;

    // Make sure the largest variable is actually larger
    if (secondLargest > largest) {
        int temp = largest;
        largest = secondLargest;
        secondLargest = temp;
    }
    // Check the remaining numbers in the array
    for (i =2; i < 10; i++) {
        // Update both values if a new largest is found
        if (numbers[i] > largest) {
            secondLargest = largest;
            largest = numbers[i];
        }
        // Update only the second-largest value
        else if(numbers[i] > secondLargest &&
                numbers[i] < largest) {
            secondLargest = numbers[i];
        }
    }
    // Display the two largest values
    printf("Largest: %d\n", largest);
    printf("2nd Largest: %d\n", secondLargest);
    return 0;
}