#include <stdio.h>

int a[10][10], r, c;

int columnSum(int j, int i)
{
    if (i == r)
        return 0;

    return a[i][j] + columnSum(j, i + 1);
}

int main()
{
    int i, j, minSum, minCol, sum;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    minSum = columnSum(0, 0);
    minCol = 0;

    for (j = 1; j < c; j++)
    {
        sum = columnSum(j, 0);

        if (sum < minSum)
        {
            minSum = sum;
            minCol = j;
        }
    }

    printf("Column with minimum sum: %d\n", minCol + 1);
    printf("Minimum sum: %d\n", minSum);

    return 0;
}