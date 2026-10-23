#include <stdio.h>

int isSymmetric(int a[10][10], int n, int i, int j)
{
    if (i == n)
        return 1;

    if (j == n)
        return isSymmetric(a, n, i + 1, 0);

    if (a[i][j] != a[j][i])
        return 0;

    return isSymmetric(a, n, i, j + 1);
}

int main()
{
    int a[10][10], n, i, j;

    printf("Enter the order of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    if (isSymmetric(a, n, 0, 0))
        printf("Matrix is Symmetric.");
    else
        printf("Matrix is not Symmetric.");

    return 0;
}