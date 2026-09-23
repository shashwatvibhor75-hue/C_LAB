#include <stdio.h>

int main() {
    int lower, upper, i, j, is_prime, count = 0;

    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    printf("\nPrime numbers between %d and %d are:\n", lower, upper);

    for (i = lower; i <= upper; i++) {
        if (i < 2) {
            continue;
        }

        is_prime = 1; 

        
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                is_prime = 0; 
                break;        
            }
        }

        if (is_prime == 1) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\n\nTotal number of prime numbers found: %d\n", count);

    return 0;
}