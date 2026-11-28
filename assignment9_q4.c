#include <stdio.h>

int gcd(int a, int b)
{
    int i, result = 1;

    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            result = i;
    }

    return result;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int a, b, c;
    int GCD, LCM;

    printf("Enter three positive integers: ");
    scanf("%d %d %d", &a, &b, &c);

    GCD = gcd(gcd(a, b), c);
    LCM = lcm(lcm(a, b), c);

    printf("GCD = %d\n", GCD);
    printf("LCM = %d\n", LCM);

    return 0;
}