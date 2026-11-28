#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, average;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Please enter a positive integer for n.\n");
        return 1;
    }

    int arr[n]; 

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }

    printf("\nThe elements in the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    average = sum / n;
    printf("Sum of the elements: %.2f\n", sum);
    printf("Average of the elements: %.2f\n", average);

    return 0;
}