#include <stdio.h>
int findMax(int arr[], int n) {
    if (n == 1)
        return arr[0];
    
    int subMax = findMax(arr, n - 1);
    return (arr[n - 1] > subMax) ? arr[n - 1] : subMax;
}

void findSecondMax(int arr[], int n, int max, int *secMax, int *found) {
    if (n == 0)
        return;

    findSecondMax(arr, n - 1, max, secMax, found);

    if (arr[n - 1] < max) {
        if (!(*found) || arr[n - 1] > *secMax) {
            *secMax = arr[n - 1];
            *found = 1; 
        }
    }
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n < 2) {
        printf("Fewer than two elements exist in the array.\n");
        return 0;
    }

    int max = findMax(arr, n);

    int secMax = 0;
    int found = 0; 
    findSecondMax(arr, n, max, &secMax, &found);

    if (!found) {
        printf("Fewer than two distinct elements exist in the array.\n");
    } else {
        printf("The second-largest distinct element is: %d\n", secMax);
    }

    return 0;
}