#include <stdio.h>

int main() {
    int n, i;
    long long t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
    } 
    else if (n == 1) {
        printf("Fibonacci Series: %lld\n", t1);
    } 
    else {
        printf("Fibonacci Series: %lld, %lld", t1, t2);

        for (i = 3; i <= n; ++i) {
            nextTerm = t1 + t2;
            printf(", %lld", nextTerm);
            t1 = t2;
            t2 = nextTerm;
        }
        printf("\n");
    }

    return 0;
}