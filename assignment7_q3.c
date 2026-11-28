#include <stdio.h>

int main() {
    int n, i, pos, elem;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Number of elements must be greater than 0.\n");
        return 1;
    }

    int arr[n + 1];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &elem);
    
    printf("Enter the position to insert it (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Error: Invalid position! Please enter a position between 1 and %d.\n", n + 1);
        return 1;
    }

    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = elem;
    n++;

    printf("\nUpdated array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}