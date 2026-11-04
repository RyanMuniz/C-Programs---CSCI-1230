/*************************************************************************
// Name: Ryan Muniz
// Email: rmuniz15@student.cnm.edu
// Date: November 4, 2026
// Class: C Programming
// Assignment: Exam 2
// Purpose: Determine whether a user-entered phrase
// is a palindrome using a Boolean function
// File Name: "p2.c"
**************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// Function checks whether the phrase is a palindrome
bool isPalindrome(char phrase[]) {
    int left = 0;
    int right = (int)strlen(phrase) - 1;

    // Compare characters from both ends of the phrase
    while (left < right) {
        // Skip characters that are not letters or numbers
        if (!isalnum((unsigned char)phrase[left])) {
            left++;
            continue;
        }
        if (!isalnum((unsigned char)phrase[right])) {
            right --;
            continue;
        }
        // Compare both characters without case sensitivity
        if (tolower((unsigned char)phrase[left]) != 
        tolower((unsigned char)phrase[right])) {
            return false;
        }
        // Move inward toward the middle of the phrase
        left++;
        right--;
    }
    return true;
}

int main(void) {
    // Output header
    printf("=========================\n");
    printf("Name: Ryan Muniz\n");
    printf("Email: rmuniz15@student.cnm.edu\n");
    printf("Purpose: Check if phrase is a palindrome\n");
    printf("File Name: p2.c\n");
    printf("=========================\n");
    char phrase[200];
    // Asks user to enter phrase
    printf("Enter a phrase: ");
    fgets(phrase, sizeof(phrase), stdin);
    // Call the function and display the result
    if (isPalindrome(phrase)) {
        printf("True, this is a palindrome.\n");
    }
    else {
        printf("False, this is not a palindrome.\n");
    }
    return 0;
}
