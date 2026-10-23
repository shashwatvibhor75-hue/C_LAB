#include <stdio.h>

int binarysearch(int a[], int l, int r, int data)
{
    int mid;
    
    if (l > r)
    {
        return -1;
    }
    
    mid = (l + r) / 2;
    
    if (a[mid] == data)
    {
        return mid;
    }
    else if (a[mid] > data)
    {
        return binarysearch(a, l, mid - 1, data);
    }
    else
    {
        return binarysearch(a, mid + 1, r, data);
    }
}

int main() {
    int a[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(a) / sizeof(a[0]);
    int data = 23;

    int result = binarysearch(a, 0, n - 1, data);

    if (result != -1) {
        printf("Element %d found at index %d.\n", data, result);
    } else {
        printf("Element %d not found in the array.\n", data);
    }

    return 0;
}