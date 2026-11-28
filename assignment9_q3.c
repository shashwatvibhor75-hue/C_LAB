#include <stdio.h>

int sumDigits(int n)
{
    int sum = 0;

    if (n < 0)
        n = -n;

    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    return sum;
}

int countDigits(int n)
{
    int count = 0;

    if (n < 0)
        n = -n;

    if (n == 0)
        return 1;

    while (n > 0)
    {
        count++;
        n = n / 10;
    }

    return count;
}

int reverse(int n)
{
    int rev = 0, digit;

    if (n < 0)
        n = -n;

    while (n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    return rev;
}

void palindrome(int n)
{
    int original = n;
    int rev = reverse(n);

    if (n < 0)
        original = -n;

    if (original == rev)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");
}

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Sum of digits = %d\n", sumDigits(num));
    printf("Count of digits = %d\n", countDigits(num));
    printf("Reverse = %d\n", reverse(num));

    palindrome(num);

    return 0;
}