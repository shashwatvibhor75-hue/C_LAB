
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len / 2; i++)
    {
        if(tolower(str[i]) != tolower(str[len - 1 - i]))
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        printf("String is Palindrome.");
    }
    else
    {
        printf("String is not Palindrome.");
    }

    return 0;
}
