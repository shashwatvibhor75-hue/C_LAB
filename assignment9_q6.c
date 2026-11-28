#include <stdio.h>

void calculate(int a, int b, int *sum, int *diff, int *prod, float *quot)
{
    *sum = a + b;
    *diff = a - b;
    *prod = a * b;

    if (b != 0)
        *quot = (float)a / b;
}

int main()
{
    int a, b;
    int sum, diff, prod;
    float quot;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    calculate(a, b, &sum, &diff, &prod, &quot);

    printf("\nAddition = %d\n", sum);
    printf("Subtraction = %d\n", diff);
    printf("Multiplication = %d\n", prod);

    if (b != 0)
        printf("Division = %.2f\n", quot);
    else
        printf("Division is not possible by zero.\n");

    return 0;
}