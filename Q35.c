/*Accept numbers n and print the odd/even numbers up to n using recursive function.*/

#include<stdio.h>

void odd_even(int n , int i) {
  if(i > n) {
    return;
  }
  if(i % 2 == 0) {
    printf("%d is even\n" , i);
  } else {
    printf("%d is odd\n" , i);
  }
  odd_even(n , i + 1);
}

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d" , &n);
  odd_even(n , 1);
  return 0;
}
