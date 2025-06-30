/*Write a program in C to check if the given number is the Armstrong number or not (e.g. 153 = 1³ + 5³ + 3³ = 153).*/
#include<stdio.h>


int main() {
  int num , original_number , remainder , n = 0 , result = 0;
  printf("Enter a number: ");
  scanf("%d" , &num);

  original_number = num;

  while(original_number != 0) {
    original_number /= 10;
    n++;
  }

  original_number = num;

  while(original_number != 0) {
    remainder = original_number % 10;
    int power = 1;
    for(int i = 0; i<n; i++) {
      power *= remainder;
    }
    result += power;
    original_number /= 10;
  }

  if(result == num) {
    printf("%d is an Armstrong number." , num);
  } else {
    printf("%d is not an Armstrong number." , num);
  }
  return 0;
 }
