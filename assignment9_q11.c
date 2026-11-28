#include <stdio.h>

void analyze(char *str, int *v, int *c, int *d, int *s, int *sp)
{
    int i = 0;
    char ch;

    *v = 0;
    *c = 0;
    *d = 0;
    *s = 0;
    *sp = 0;

    while (str[i] != '\0')
    {
        ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                (*v)++;
            else
                (*c)++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            (*d)++;
        }
        else if (ch == ' ')
        {
            (*s)++;
        }
        else
        {
            (*sp)++;
        }

        i++;
    }
}

int main()
{
    char str[200];
    int v, c, d, s, sp;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    analyze(str, &v, &c, &d, &s, &sp);

    printf("\n----- String Analysis -----\n");
    printf("Vowels = %d\n", v);
    printf("Consonants = %d\n", c);
    printf("Digits = %d\n", d);
    printf("Spaces = %d\n", s);
    printf("Special Characters = %d\n", sp);

    return 0;
}