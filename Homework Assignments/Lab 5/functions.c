/*************************************************************************
// Name: Ryan Muniz
// Email: rmuniz15@student.cnm.edu
// Date: September 30, 2026
// Class: C Programming
// Assignment: Lab 5
// Purpose: Calculates the volume of a sphere, cuboid, or pyramid
// using functions.
// File Name: "functions.c"
**************************************************************************/

#include <stdio.h>

// Constant used for calculations involving circles and spheres
#define PI 3.14159

// Calculates and returns the volume of a sphere
double sphereVolume(double radius);
// Calculates and returns the volume of a cuboid
double cuboidVolume(double length, double width, double height);
// Calculates and returns the volume of a square-based pyramid
double pyramidVolume(double side, double height);

int main(void) {
    // Stores the users menu selection
    int choice;
    // Stores measurements entered by user
    double radius;
    double length;
    double width;
    double height;
    double side;

    // Store the calculated volume returned by a function
    double volume;

    // Output header
    printf("=========================\n");
    printf("Name: Ryan Muniz\n");
    printf("Email: rmuniz15@student.cnm.edu\n");
    printf("Purpose: Calculates the volume of a sphere, cuboid, or pyramid\n");
    printf("using functions.\n");
    printf("File Name: functions.c\n");
    printf("=========================\n");

    // Displays welcome message and selection menu
    printf("\nWelcome to the C volume finder.\n");
    printf("Please choose which three-dimensional geometric solid\n");
    printf("you wish to find the volume for:\n");

    printf("1. Sphere\n");
    printf("2. Cuboid\n");
    printf("3. Pyramid\n");

    printf("\n");
    // Asks user for selection
    printf("Choice?: ");
    // Reads integer selection
    scanf("%d", &choice);
    printf("\n");

    /*
    The switch statement checks the value stored in choice
    Each case collects the measurements needed for that shape
    and then calls the appropriate volume function
    */
   switch(choice) {
    case 1:
        // Asks user for sphere radius
        printf("Radius?: ");
        scanf("%lf", &radius);

        // Call sphereVolume and store returned answer in volume
        volume = sphereVolume(radius);
        printf("\n");
        //Display calculated sphere volume
        printf("Volume is %.5f\n", volume);
        break;
    case 2:
        // Asks user for cuboid length
        printf("Length?: ");
        scanf("%lf", &length);

        // Asks user for cuboid width
        printf("Width?: ");
        scanf("%lf", &width);

        // Asks user for cuboid height
        printf("Height?: ");
        scanf("%lf", &height);

        // Call cuboidVolume and store returned answer in volume
        volume = cuboidVolume(length, width, height);
        printf("\n");
        // Display calculated cuboid volume
        printf("Volume is %.5f\n", volume);
        break;
    case 3:
        // Asks user for side length, and height of pyramid
        printf("Base side?: ");
        scanf("%lf", &side);
        printf("Height?: ");
        scanf("%lf", &height);

        // Call pyramidVolume and store returned answer in volume
        volume = pyramidVolume(side, height);
        printf("\n");
        // Display calculated pyramid volume
        printf("Volume is %.5f\n", volume);
        break;
    default:
        // If user puts any other number besides 1,2,3
        // means no volume function needs to be called
        break;
   }
   // Goodbye message
   printf("\n");
   printf("Thank you for using the C volume calculator.\n");
   printf("Later!\n");

   // Return 0 to indicate program finished successfully
   return 0;
}

/*
Function: 
sphereVolume
Purpose: 
Calculates the volume of a sphere using the radius
Formula:
Volume = (4/3)*PI*radius^3
*/
double sphereVolume(double radius) {
    // Calculate sphere volume and return the result to main
    return (4.0/3.0)*PI*radius*radius*radius;
}

/*
Function: 
cuboidVolume
Purpose:
Calculates the volume of a cuboid using its
length, width, and height
Formula:
Volume = length*width*height
*/
double cuboidVolume(double length, double width, double height) {
    // Calculate cuboid volume and return result to main
    return length*width*height;
}

/*
Function:
pyramidVolume
Purpose:
Calculates the volume of a pyramid using
the side length of its base and height
Formula:
Volume = (1/3)*baseArea*height
baseArea = side*side
*/
double pyramidVolume(double side, double height) {
    // Calculate pyramid volume and return result to main
    return (1.0/3.0)*side*side*height;
}