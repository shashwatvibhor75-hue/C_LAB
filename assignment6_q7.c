#include <stdio.h>

int main() {
    int n, temp;
    long long binary = 0;
    long long place = 1;

    printf("Enter a positive decimal integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }

    if (n == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    temp = n;

    while (temp > 0) {
        int remainder = temp % 2;     
        binary += remainder * place;  
        temp /= 2;                   
        place *= 10;               
    }

    printf("Binary equivalent of %d is: %lld\n", n, binary);

    return 0;
}