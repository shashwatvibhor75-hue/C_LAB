
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int len1, len2, result;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    printf("Length of first string = %d\n", len1);
    printf("Length of second string = %d\n", len2);

    result = strcmp(str1, str2);

    if(result == 0)
    {
        printf("Both strings are equal.");
    }
    else if(result < 0)
    {
        printf("First string comes before second string.");
    }
    else
    {
        printf("Second string comes before first string.");
    }

    return 0;
}
