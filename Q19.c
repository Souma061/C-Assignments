/*Write a program in C – to print square and cube of a given number. (e.g., input – 2, 3 – output 4, 9, 8, 27 – square and cube of the numbers between input no.s)*/

#include <stdio.h>

int main()
{
  int num1, num2;
  printf("Enter the first number: ");
  scanf("%d", &num1);
  printf("Enter the second number: ");
  scanf("%d", &num2);


t first_number = (num1 < num2) ? num1 : num2;
  int last_number = (num1 > num2) ? num1 : num2;

  printf("Square of the numbers: ");
  for (int i = first_number; i <= last_number; i++)
  {
    printf("%d ", i * i);
  }

  printf("\nCube of the numbers: ");
  for (int i = first_number; i <= last_number; i++)
  {
    printf("%d ", i * i * i);
  }

  printf("\n");
  return 0;
}
