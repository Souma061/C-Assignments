/* Write a program in C to swap two numbers of n length using pointer*/

#include<stdio.h>
#include<math.h>

int cnt_digits(int num) {
  if(num == 0) return 1;
  int count = 0;
  while(num != 0) {
    num /= 10;
    count++;
  }
  return count;
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int num1 , num2 , n;

  printf("Enter the length of the digist: ");
  scanf("%d" , &n);

  printf("Enter the first number: ");
  scanf("%d" , &num1);
   printf("Enter the second number: ");
  scanf("%d" , &num2);

  if(cnt_digits(num1) != n || cnt_digits(num2) != n) {
    printf("Both numbers must same length of %d digits.\n" , n);
    return 1;
  }

  printf("Before swapping: num1 = %d , num2 = %d\n" , num1 , num2);
  swap(&num1 , &num2) ;
  printf("After swapping: num1 = %d , num2 = %d\n" , num1 , num2);
  return 0;



}
