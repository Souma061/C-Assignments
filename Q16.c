#include <stdio.h>

int main() {
    int num1, num2;

    // Input from user
    printf("Enter the first two-digit number: ");
    scanf("%d", &num1);

    printf("Enter the second two-digit number: ");
    scanf("%d", &num2);

    // Check if both numbers are two-digit numbers
    if ((num1 >= 10 && num1 <= 99) || (num1 <= -10 && num1 >= -99)) {
        if ((num2 >= 10 && num2 <= 99) || (num2 <= -10 && num2 >= -99)) {

            // Perform multiplication
            int product = num1 * num2;
            printf("Multiplication: %d * %d = %d\n", num1, num2, product);

            // Perform division (check for divide-by-zero)
            if (num2 != 0) {
                float division = (float)num1 / num2;
                printf("Division: %d / %d = %.2f\n", num1, num2, division);
            } else {
                printf("Division by zero is not allowed.\n");
            }

        } else {
            printf("Second number is not a two-digit number.\n");
        }
    } else {
        printf("First number is not a two-digit number.\n");
    }

    return 0;
}
