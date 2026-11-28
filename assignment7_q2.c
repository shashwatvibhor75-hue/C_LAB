#include <stdio.h>

int main() {
    int n, i, target, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);
    printf("\n--- Results ---\n");
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++; 
            printf("Found at position %d\n", i + 1);
        }
    }

    if (count == 0) {
        printf("Element not found in the array.\n");
    } else {
        printf("Total occurrences: %d time(s)\n", count);
    }

    return 0;
}