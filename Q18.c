/*Write a program in C – to read 2 numbers and print all digits between them in reverse order.
*/

#include<stdio.h>

int main() {
  int num1 , num2;
  printf("Enter the number: ");
  scanf("%d" , &num1);
  printf("Enter the number: ");
  scanf("%d" , &num2);

  int first_number = (num1 > num2) ? num1 - 1 : num2 - 1;
  int last_number = (num1 < num2) ? num1 + 1 : num2 + 1;

  for(int i = first_number; i >= last_number ; i--) {
    printf("%d " , i);

  }
  printf("\n");
  return 0;

}
