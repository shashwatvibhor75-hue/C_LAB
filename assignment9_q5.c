#include <stdio.h>

int totalMarks(int a, int b, int c, int d, int e)
{
    return a + b + c + d + e;
}

float percentage(int total)
{
    return total / 5.0;
}

void grade(float per)
{
    if (per >= 90)
        printf("Grade = A\n");
    else if (per >= 80)
        printf("Grade = B\n");
    else if (per >= 70)
        printf("Grade = C\n");
    else if (per >= 60)
        printf("Grade = D\n");
    else
        printf("Grade = E\n");
}

void checkPass(int a, int b, int c, int d, int e)
{
    if (a >= 40 && b >= 40 && c >= 40 && d >= 40 && e >= 40)
        printf("Result = PASS\n");
    else
        printf("Result = FAIL\n");
}

int main()
{
    int m1, m2, m3, m4, m5;
    int total;
    float per;

    printf("Enter marks in five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = totalMarks(m1, m2, m3, m4, m5);
    per = percentage(total);

    printf("\n----- Student Result -----\n");
    printf("Total Marks = %d / 500\n", total);
    printf("Percentage = %.2f%%\n", per);

    grade(per);
    checkPass(m1, m2, m3, m4, m5);

    return 0;
}