/*************************************************************************
// Name: Ryan Muniz
// Email: rmuniz15@student.cnm.edu
// Date: September 21, 2026
// Class: C Programming
// Assignment: Lab 3
// Purpose: Practice using if statements to produce a 
// grading system with feedback.
// File Name: "exam_grading.c"
**************************************************************************/

#include <stdio.h>

int main() {
    // Output header
    printf("=========================\n");
    printf("Name: Ryan Muniz\n");
    printf("Email: rmuniz15@student.cnm.edu\n");
    printf("Purpose: Practice using if statements to produce a \n");
    printf("grading system with feedback.\n");
    printf("File Name: exam_grading.c\n");
    printf("=========================\n");

    printf("\n");
    // Welcomes user to the exam grading system
    printf("Welcome to the Exam Grading System!\n");
    printf("\n");

    // Declares int examScore and char grade,feedback

    // the * character in front of feedback points to the first character 
    // of a string allowing us to find the corresponding fixed feedback 
    // message for the student depending on their grade 

    int examScore;
    char grade;
    char *feedback;

    // User prompt for exam score
    printf("Please enter your exam score: ");
    scanf("%d", &examScore);
    printf("\n");

    // if Statement for exam score feedback
    if (examScore >= 90) {
        grade = 'A';
        feedback = "Excellent Work! Keep it up.";
    }
    else if (examScore >= 80) {
        grade = 'B';
        feedback = "Good work, almost there!";
    }
    else if (examScore >= 70) {
        grade = 'C';
        feedback = "Satisfactory, needs a little work.";
    }
    else if (examScore >= 60) {
        grade = 'D';
        feedback = "Needs improvement, try spending more time studying!";
    } 
    else {
        grade = 'F';
        feedback = "See me in office hours if you need help!";
    }
    // Print exam score, grade, and feedback
    printf("Exam Score: %d\n", examScore);
    printf("Grade: %c\n", grade);
    printf("Feedback: %s\n", feedback);
    printf("\n");
    return 0;
}