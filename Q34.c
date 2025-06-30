/*Accept any number from the user and calculate the factorial of the number using recursion*/

#include<stdio.h>

int factorial(int n)
{
  if(n == 0 || n == 1) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }

}
int main() {
  int num;
  printf("Enter a number to calculate its factorial: ");
  scanf("%d" , &num);

  if(num < 0) {
    printf("Invalid input!! Factorial is not defined for negative numbers.\n");
  } else {
    int result = factorial(num);
    printf("The factorial of %d is %d\n" , num , result);

  }
  return 0;
}
