#include<stdio.h>

int main() {
  int n ;

  printf("Enter the number: ");
  scanf("%d" , &n);

  for(int i = 1; i <= n; i++) {
    if(n % i == 0) {
      printf("%d, " , i);
    }
  }
  printf("\b\b.");
  return 0;
}