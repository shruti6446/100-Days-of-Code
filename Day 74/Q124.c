//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>
int main() {
    FILE *source, *dest;
    char srcFile[50], destFile[50];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", srcFile);
    printf("Enter destination filename: ");
    scanf("%s", destFile);

    source = fopen(srcFile, "r");
    if (source == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error opening destination file!\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully from %s to %s\n", srcFile, destFile);

    fclose(source);
    fclose(dest);
    return 0;
}
