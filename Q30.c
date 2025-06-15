/* Write a function to find all perfect numbers from 1 to 100 (perfect numbers are positive integers
where the sum of perfect divisor is the number itself, e.g., 6 = 1+2+3).*/

#include<stdio.h>

int perfect_number(int n) {
  int sum = 0;
  for(int i = 1; i < n; i++) {
    if(n % i == 0) {
      sum += i;
    }
  }
  return sum == n;
}

int main() {
  printf("The perfect numbers from 1 to 100 are: \n");
  for(int i = 1 ; i <=100 ; i++) {
    if(perfect_number(i)) {
      printf("%d " , i);
    }
  }
  printf("\n");
  return 0;
}




