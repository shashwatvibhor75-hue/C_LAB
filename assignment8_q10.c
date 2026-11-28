#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    char *word;
    int count = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    word = strtok(str, " ");

    while (word != NULL)
    {
        printf("%s\n", word);
        count++;

        word = strtok(NULL, " ");
    }

    printf("Total number of words = %d", count);

    return 0;
}