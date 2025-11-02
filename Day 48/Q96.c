#include <stdio.h>
#include <string.h>

void reverse(char word[]) {
    int i, len = strlen(word);
    for (i = 0; i < len / 2; i++) {
        char temp = word[i];
        word[i] = word[len - i - 1];
        word[len - i - 1] = temp;
    }
}

int main() {
    char str[200], word[50];
    int i = 0, j = 0;
    printf("Enter a sentence: ");
    gets(str);

    printf("Sentence with each word reversed:\n");
    while (1) {
        if (str[i] != ' ' && str[i] != '\0')
            word[j++] = str[i];
        else {
            word[j] = '\0';
            reverse(word);
            printf("%s", word);
            if (str[i] == ' ')
                printf(" ");
            if (str[i] == '\0')
                break;
            j = 0;
        }
        i++;
    }

    printf("\n");
    return 0;
}
