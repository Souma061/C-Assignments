/* Write a program in C to accept numbers till a negative number is entered and calculate the sum
of a list of numbers read using static variable.*/

#include<stdio.h>

int main() {
  int num;
  static int sum = 0;
  printf("Enter numbers (negative to stop) : \n");

  while(1) {
    scanf("%d" , &num);
    if(num < 0) {
      break;
    }
    sum += num; // Add the number to the sum
  }
  printf("Sum of the entered numbers : %d\n" , sum);
  return 0;
}
