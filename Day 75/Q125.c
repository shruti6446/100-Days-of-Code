//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[100];
    char text[200];

    // Ask for the filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in append mode
    fptr = fopen(filename, "a");
    if (fptr == NULL) {
        printf("Error: File not found or cannot be opened.\n");
        return 1;
    }

    // Clear input buffer before taking text input
    getchar();

    // Ask the user for a new line of text
    printf("Enter a line of text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append the text to the file
    fprintf(fptr, "%s", text);

    printf("Text appended successfully.\n");

    // Close the file
    fclose(fptr);

    return 0;
}

