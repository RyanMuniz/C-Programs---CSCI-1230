/*************************************************************************
// Name: Ryan Muniz
// Email: rmuniz15@student.cnm.edu
// Date: November 16, 2026
// Class: C Programming
// Assignment: Lab 11
// Purpose: Demonstrate pointers, array operations, swapping values,
// and reversing an array using pointer arithmetic.
// File Name: "PointersLab.c"
**************************************************************************/

#include <stdio.h>

// Functions
void printArray(int *arr, int size);
int sumArray(int *arr, int size);
void swap(int *a, int *b);
void reverseArray(int *arr, int size);

// Prints array elements using pointer arithmetic
void printArray(int *arr, int size) {
    int i;
    // Loop through each element using its memory offset
    for (i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

// Calculates the sum using pointer operations
int sumArray(int *arr, int size) {
    int sum = 0;
    int i;
    // Dereference each pointer position and add its value
    for (i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

// Swaps two integers by accessing their memory addresses
void swap(int *a, int *b) {
    int temp;
    // Save the first value before overwriting it
    temp = *a;
    // Assign the second value to the first variable
    *a = *b;
    // Assign the saved first value to the second variable
    *b = temp;
}

// Reverses an array in place using pointer arithmetic
void reverseArray(int *arr, int size) {
    int *left = arr;
    int *right = arr + size - 1;
    int temp;

    // Swap the values until both pointers meet in the middle
    while (left < right) {
        temp = *left;
        *left = *right;
        *right = temp;
        // Move the pointers towards the center
        left++;
        right--;
    }
}

int main(void) {
    // Output header
    printf("=========================\n");
    printf("Name: Ryan Muniz\n");
    printf("Email: rmuniz15@student.cnm.edu\n");
    printf("Purpose: Demonstrate pointer operations in C.\n");
    printf("File Name: PointersLab.c\n");
    printf("=========================\n");
    printf("\n");

    // Task 1: Pointer Basics
    printf("Task 1: Pointer Basics\n");
    // Declare an integer and a pointer to its address
    int x = 25;
    int *p = &x;
    // Display the value and memory address
    printf("x before: %d\n", x);
    printf("x address: %p\n", (void *)&x);
    printf("p points to: %p\n", (void *)p);
    // Dereference p to modify the original value of x
    *p = 50;
    printf("x after modification via pointer: %d\n\n", x);

    // Task 2: Arrays with Pointers
    printf("Task 2: Arrays with Pointers\n");
    // Initialize array containing five integers
    int myArray[5] = {10, 20, 30, 40, 50};
    // Call the function to display all array elements
    printf("Array elements: ");
    printArray(myArray, 5);
    // Call the function to calculate the total
    printf("Sum = %d\n\n", sumArray(myArray, 5));

    // Task 3: Pointers and Functions
    printf("Task 3: Pointers and Functions\n");
    // Initialize two integers to demonstrate swapping
    int a = 7;
    int b = 9;
    printf("Before swap: a = %d, b = %d\n", a, b);
    // Pass the addresses so the function can modify them
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n\n", a, b);

    // Task 4: Implementation Practice
    printf("Task 4: Reverse Array\n");
    // Get a string from the user
    char userString[100];
    printf("Enter a string: ");
    fgets(userString, sizeof(userString), stdin);
    // Display the string entered by user
    printf("You entered: %s", userString);
    // Create an integer array to reverse it
    int reverseNumbers[5] = {10, 20, 30, 40, 50};
    // Display the array before the reversal
    printf("\nArray before reversal: ");
    printArray(reverseNumbers, 5);
    // Reverse the original array using pointers
    reverseArray(reverseNumbers, 5);
    // Display the modified array
    printf("Array after reversal: ");
    printArray(reverseNumbers, 5);

    return 0;
}

