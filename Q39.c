/* Write a program in C to accept a number and find the factorial of the number demonstrating
use of automatic variables.*/

#include<stdio.h>


int main() {

  auto int num , i;
  auto long long factorial = 1;

  printf("Enter a number: ");
  scanf("%d" , &num);
  if(num < 0) {
    printf("Invalid input!\n");
  } else {
    for(int i = 1 ; i <= num ; i++) {
      factorial *= i;
    }
  }
  printf("Factorial of %d is %lld\n" , num , factorial);
  return 0;
}
