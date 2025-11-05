//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    // Open input file for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    // Open output file for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Cannot open output.txt\n");
        fclose(inputFile);
        return 1;
    }

    // Read each character from input.txt
    while ((ch = fgetc(inputFile)) != EOF) {
        // Convert lowercase to uppercase
        ch = toupper(ch);
        fputc(ch, outputFile);
    }

    printf("File converted successfully! Check output.txt\n");

    // Close files
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
