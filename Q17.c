/* Write a program in C to read a number and print 5 terms of the Fibonacci series*/

#include<stdio.h>

int main() {
  int n,a = 0 , b = 1 , c;
  printf("Enter the number of terms: ");
  scanf("%d" , &n);

  if(n >= 1) {
    printf("%d " , a);
  }
  if(n >= 2) {
    printf("%d " , b);
  }
  for(int i=3; i <=n; i++) {
    c = a + b;
    printf("%d " , c);
    a = b;
    b = c;
  }
  printf("\n");
  return 0;
}
