/* Write a program in C to illustrate the Call by Value and Call by reference a rule in C
programming.*/

#include<stdio.h>

void call_by_value(int a , int b) {
  a = a + 10;
  b = b + 10;
  printf("Inside call by value: a = %d , b = %d\n" , a , b);
}

void call_by_reference(int *a , int *b) {
  *a = *a + 10;
  *b = *b + 10;
  printf("Inside call by refence: a = %d , b = %d\n" , *a , *b);
}

int main() {
  int x = 5 , y = 15;
  printf("before call by value: x = %d , y = %d\n" , x , y);
  call_by_value(x , y);
  printf("after call by value: x = %d , y = %d\n" , x , y);
  printf("Before call by reference: x = %d , y = %d\n" , x , y);
  call_by_reference(&x , &y);
  printf("after call by reference: x = %d , y = %d\n" , x , y);
  return 0;
}
