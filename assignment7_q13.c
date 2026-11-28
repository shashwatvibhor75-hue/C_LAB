
#include <stdio.h>

int main()
{
    int a[10][10], t[10][10];
    int n, i, j;
    int symmetric = 1, skew = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Finding transpose
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            t[i][j] = a[j][i];
        }
    }

    // Checking symmetry
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != t[i][j])
            {
                symmetric = 0;
            }

            if(a[i][j] != -t[i][j])
            {
                skew = 0;
            }
        }
    }

    printf("Transpose of matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    if(symmetric == 1)
    {
        printf("Matrix is Symmetric.");
    }
    else if(skew == 1)
    {
        printf("Matrix is Skew-Symmetric.");
    }
    else
    {
        printf("Matrix is Neither Symmetric nor Skew-Symmetric.");
    }

    return 0;
}
