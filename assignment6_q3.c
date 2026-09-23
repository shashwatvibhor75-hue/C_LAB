#include <stdio.h>

int main() {
    int n, original, reversed = 0, remainder;

    printf("Enter a positive integer: ");
    scanf("%d", &n);


    if (n < 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }

    original = n;


    while (n != 0) {
        remainder = n % 10;          
        reversed = reversed * 10 + remainder; 
        n /= 10;                        
    }

    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}