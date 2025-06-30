#include<stdio.h>

int main() {
  int n, sum=0;

  printf("Enter a number: ");
  scanf("%d" , &n);

  if(n <= 0) {
    printf("Please enter a positive natural number.\n");
    return 1;

  }

  for(int i = 1; i <= n; i++) {
    sum += i;
  }
  printf("Sum of first %d natural number is %d\n" , n , sum);
  return 0;
}