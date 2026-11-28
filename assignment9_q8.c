#include <stdio.h>

void display(int *a, int n)
{
    int i;

    printf("Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));
    }
    printf("\n");
}

void insert(int *a, int *n, int pos, int value)
{
    int i;

    for (i = *n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos - 1] = value;
    (*n)++;
}

int delete(int *a, int *n, int pos)
{
    int i, value;

    value = a[pos - 1];

    for (i = pos - 1; i < *n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    (*n)--;

    return value;
}

int main()
{
    int a[100], n, i;
    int choice, pos, value, deleted;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    do
    {
        printf("\n----- MENU -----\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                display(a, n);
                break;

            case 2:
                if (n >= 100)
                {
                    printf("Array is full.\n");
                    break;
                }

                printf("Enter position: ");
                scanf("%d", &pos);

                if (pos < 1 || pos > n + 1)
                {
                    printf("Invalid position.\n");
                    break;
                }

                printf("Enter value: ");
                scanf("%d", &value);

                insert(a, &n, pos, value);

                printf("Element inserted successfully.\n");
                break;

            case 3:
                if (n == 0)
                {
                    printf("Array is empty.\n");
                    break;
                }

                printf("Enter position to delete: ");
                scanf("%d", &pos);

                if (pos < 1 || pos > n)
                {
                    printf("Invalid position.\n");
                    break;
                }

                deleted = delete(a, &n, pos);

                printf("Deleted value = %d\n", deleted);
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}