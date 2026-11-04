/*************************************************************************
// Name: Ryan Muniz
// Email: rmuniz15@student.cnm.edu
// Date: November 4, 2026
// Class: C Programming
// Assignment: Lab 9
// Purpose: Reads hurricane data from a CSV file, finds the year
// with the highest ACE index, displays, and saves the results
// to a text file.
// File Name: "fileIO.c"
**************************************************************************/

#include <stdio.h>

int main(void) {
    // Output header
    printf("=========================\n");
    printf("Name: Ryan Muniz\n");
    printf("Email: rmuniz15@student.cnm.edu\n");
    printf("Purpose: Reads hurricane data from a CSV file, finds the year\n");
    printf("with the highest ACE index, displays, and saves the results\n");
    printf("to a text file.\n");
    printf("File Name: fileIO.c\n");
    printf("=========================\n");
    printf("\n");

    // File pointers for reading/writing
    FILE *inputFile;
    FILE *outputFile;

    // Variables to store data from each row
    int year;
    int aceIndex;
    int tropicalStorms;
    int hurricanes;
    int majorHurricanes;
    // Variables to store the row w/ the highest ACE
    int maxYear = 0;
    int maxAce = -1;
    int maxStorms = 0;
    int maxHurricanes = 0;
    int maxMajorHurricanes = 0;
    // Stores the first line containing the column heading
    char header[256];
    // Open the CSV to read
    inputFile = fopen("ace.csv", "r");
    // Check whether the file opened or not
    if (inputFile == NULL) {
        printf("Error: The CSV file is empty.\n");
        return 1;
    }
    // Read and skip the first row containing column headings
    fgets(header, sizeof(header), inputFile);

    // Display the column headings in the terminal
    printf("Data File:\n");
    printf("Year ACE Storms Hurricanes Major Hurricanes\n");
    // Read each row until there are no more complete records
    while (fscanf(inputFile, " %d,%d,%d,%d,%d",
                &year, &aceIndex, &tropicalStorms,
                &hurricanes, &majorHurricanes) == 5) {
                    // Display the current row in aligned columns
                    printf("%-6d%-5d%-8d%-12d%d\n",
                        year, aceIndex, tropicalStorms,
                        hurricanes, majorHurricanes);
                    // Check whether this ACE is the highest thus far
                    if (aceIndex > maxAce) {
                        // Save the entire row containing the new max
                        maxAce = aceIndex;
                        maxYear = year;
                        maxStorms = tropicalStorms;
                        maxHurricanes = hurricanes;
                        maxMajorHurricanes = majorHurricanes;
                    }
                }
                // Close the input file after reading all data
                fclose(inputFile);
                // Make sure at least one data row was found
                if (maxAce == -1) {
                    printf("Error: No valid hurricane data found.\n");
                    return 1;
                }
                // Display maximum ACE record found
                printf("\nACE Maximum:\n");
                printf("%d %d %d %d %d\n",
                        maxYear, maxAce, maxStorms,
                        maxHurricanes, maxMajorHurricanes);
                // Create output.txt file
                outputFile = fopen("output.txt", "w");
                // Check whether the output file opened successfully
                if (outputFile == NULL) {
                    printf("Error: Could not create output.txt.\n");
                    return 1;
                }
                // Write the maximum ACE record to the output
                fprintf(outputFile, "ACE Maximum:\n");
                fprintf(outputFile, "%d %d %d %d %d\n",
                        maxYear, maxAce, maxStorms,
                        maxHurricanes, maxMajorHurricanes);
                // Close output file to save the info
                fclose(outputFile);
                // Return 0 to indicate successful completion of program
                return 0;
}