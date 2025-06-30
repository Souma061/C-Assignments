#include<stdio.h>

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d" , &n);

  int i = 1;
  while (i <= 10) {
    printf("\n%d  *  %d =  %d" , n , i , n * i);
    i++;
  }
  return 0;
}