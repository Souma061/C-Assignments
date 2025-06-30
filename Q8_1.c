#include <stdio.h>

int main() {
    int n, isPrime = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for invalid cases
    if (n <= 1) {
        printf("%d is neither PRIME nor COMPOSITE.\n", n);
        return 0;
    }

    // Check if n is divisible by any number from 2 to n/2
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = 0; // Not prime
            break;
        }
    }

    // Output the result
    if (isPrime)
        printf("%d is PRIME.\n", n);
    else
        printf("%d is COMPOSITE.\n", n);

    return 0;
}
