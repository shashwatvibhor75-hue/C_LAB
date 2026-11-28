
#include <stdio.h>

int main()
{
    int a[10][10], n, i, j;
    int mainSum = 0, secSum = 0;
    int upper = 1, lower = 1, diagonal = 1;

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

    // Sum of diagonals
    for(i = 0; i < n; i++)
    {
        mainSum = mainSum + a[i][i];
        secSum = secSum + a[i][n - 1 - i];
    }

    // Checking matrix type
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i > j && a[i][j] != 0)
            {
                upper = 0;
            }

            if(i < j && a[i][j] != 0)
            {
                lower = 0;
            }

            if(i != j && a[i][j] != 0)
            {
                diagonal = 0;
            }
        }
    }

    printf("Main diagonal sum = %d\n", mainSum);
    printf("Secondary diagonal sum = %d\n", secSum);

    if(diagonal == 1)
    {
        printf("Matrix is Diagonal.");
    }
    else if(upper == 1)
    {
        printf("Matrix is Upper Triangular.");
    }
    else if(lower == 1)
    {
        printf("Matrix is Lower Triangular.");
    }
    else
    {
        printf("Matrix is None of these.");
    }

    return 0;
}
