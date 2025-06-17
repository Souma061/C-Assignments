/*Write a program in C to find the GCD of a number.*/

#include<stdio.h>

int main() {
  int a , b ;
  printf("Enter a number: ");
  scanf("%d" , &a);
  scanf("Enter another number: ");
  scanf("%d" , &b);


  // Ensure a is greater than b
  if(a < b) {
    int temp = a;
    a = b;
    b = temp;
  }

  while(b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  printf("GCD is %d\n" , a);
  return 0;

}
