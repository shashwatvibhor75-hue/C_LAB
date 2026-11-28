#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    char *ptr;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to search: ");
    scanf(" %c", &ch);

    ptr = strchr(str, ch);

    if (ptr != NULL)
    {
        printf("Character found at position: %ld", ptr - str + 1);
    }
    else
    {
        printf("Character not found.");
    }

    return 0;
}