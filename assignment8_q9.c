#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], word[50];
    char *ptr;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    printf("Enter a word to search: ");
    scanf("%s", word);

    ptr = strstr(str, word);

    if (ptr != NULL)
    {
        printf("Word found at position: %ld", ptr - str + 1);
    }
    else
    {
        printf("Word not found.");
    }

    return 0;
}