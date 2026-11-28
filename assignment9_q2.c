#include <stdio.h>

void evenOdd(int n)
{
    if (n % 2 == 0)
        printf("Even number\n");
    else
        printf("Odd number\n");
}

void positiveNegative(int n)
{
    if (n > 0)
        printf("Positive number\n");
    else if (n < 0)
        printf("Negative number\n");
    else
        printf("Zero\n");
}

void prime(int n)
{
    int i, flag = 0;

    if (n <= 1)
    {
        printf("Not a prime number\n");
        return;
    }

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Prime number\n");
    else
        printf("Not a prime number\n");
}

void perfect(int n)
{
    int i, sum = 0;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }

    if (n > 0 && sum == n)
        printf("Perfect number\n");
    else
        printf("Not a perfect number\n");
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nNumber Classification Report\n");
    printf("----------------------------\n");

    evenOdd(num);
    positiveNegative(num);
    prime(num);
    perfect(num);

    return 0;
}