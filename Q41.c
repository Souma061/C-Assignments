/*Write a program in C to accept two numbers and find the sum of the number demonstrating use
of global variables.*/

#include<stdio.h>

int num1 , num2 , sum;

int main() {
  printf("Enter two numbers: \n");
  scanf("%d %d" , &num1 , &num2);
   sum = num1 + num2;
   printf("%d + %d = %d\n" , num1 , num2 , sum);
   return 0;
}
