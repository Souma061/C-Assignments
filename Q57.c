/* Write a few numbers in the file created earlier. Reopen it in Read mode, write odd numbers in
one file and even number in another file (use the getw and putw functions in binary mode).*/

#include <stdio.h>

int main() {
    FILE *fp, *fp_odd, *fp_even;
    int numbers[] = {414,449,494,471,322,1,22,555,55,226,5295};
    int n = sizeof(numbers)/sizeof(numbers[0]);
    int i, num;

    // Open files in binary mode
    fp = fopen("numbers.dat", "wb");  // Write binary mode
    if (fp == NULL) {
        printf("Error opening numbers.dat for writing.\n");
        return 1;
    }

    // Write numbers to binary file
    for (i = 0; i < n; i++) {
        putw(numbers[i], fp);
    }
    fclose(fp);

    // Reopen for reading in binary mode
    fp = fopen("numbers.dat", "rb");  // Read binary mode
    fp_odd = fopen("odd.dat", "wb");  // Write binary mode
    fp_even = fopen("even.dat", "wb"); // Write binary mode

    if (fp == NULL || fp_odd == NULL || fp_even == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    printf("\nProcessing numbers:\n");
    printf("------------------\n");

    // Read and separate numbers
    while ((num = getw(fp)) != EOF) {
        if (num % 2 == 0) {
            putw(num, fp_even);
            printf("Even number: %d\n", num); // Display for verification
        } else {
            putw(num, fp_odd);
            printf("Odd number: %d\n", num);  // Display for verification
        }
    }

    // Close all files
    fclose(fp);
    fclose(fp_odd);
    fclose(fp_even);

    printf("\nNumbers have been separated into odd.dat and even.dat\n");
    return 0;
}
