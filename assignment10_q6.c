#include <stdio.h>
int findMax(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    
    int subMax = findMax(arr, n - 1);
    return (arr[n - 1] > subMax) ? arr[n - 1] : subMax;
}

int countOccurrences(int arr[], int n, int max) {
    if (n == 0) {
        return 0;
    }
    
    int count = (arr[n - 1] == max) ? 1 : 0;
    
    return count + countOccurrences(arr, n - 1, max);
}

int main() {
    int arr[] = {4, 9, 2, 9, 7, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n <= 0) {
        printf("Array is empty.\n");
        return 0;
    }

    int max = findMax(arr, n);
    int count = countOccurrences(arr, n, max);

    printf("Array: {4, 9, 2, 9, 7, 9, 1}\n");
    printf("The maximum element is: %d\n", max);
    printf("It occurs %d time(s).\n", count);

    return 0;
}