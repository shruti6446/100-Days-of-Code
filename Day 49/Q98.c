//Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100], surname[50];
    int i, lastSpace = -1;
    printf("Enter full name: ");
    gets(name);

    for (i = 0; name[i] != '\0'; i++)
        if (name[i] == ' ')
            lastSpace = i;

    printf("Formatted name: ");
    if (name[0] != ' ')
        printf("%c. ", name[0]);

    for (i = 0; i < lastSpace; i++)
        if (name[i] == ' ' && name[i+1] != '\0' && i+1 != lastSpace)
            printf("%c. ", name[i+1]);

    strcpy(surname, &name[lastSpace + 1]);
    printf("%s\n", surname);

    return 0;
}
