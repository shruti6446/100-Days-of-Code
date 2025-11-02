#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0}, i;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    for (i = 0; str1[i] != '\0'; i++)
        if (str1[i] >= 'a' && str1[i] <= 'z')
            count1[str1[i] - 'a']++;

    for (i = 0; str2[i] != '\0'; i++)
        if (str2[i] >= 'a' && str2[i] <= 'z')
            count2[str2[i] - 'a']++;

    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            printf("Strings are not anagrams\n");
            return 0;
        }
    }

    printf("Strings are anagrams\n");
    return 0;
}
