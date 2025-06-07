/*Write a program in C to check the type of the given triangle whether it is equilateral, isosceles or scalene.*/

#include<stdio.h>

int main() {
  float num1 , num2 , num3;
  printf("Enter the three sides of the tringle: \n");
  scanf("%f %f %f" , &num1 , &num2 , &num3);

  if((num1 + num2 > num3) && (num2 + num3 > num1) && (num1 + num3 > num2)) {
    if(num1 == num2 && num2 == num3) {
      printf("The triangle is equilateral.");
    } else if(num1 == num2 || num1 == num3 || num2 == num3) {
      printf("The triangle is isosceles.");
    } else {
      printf("The triangle is scalene.");
    }
  } else {
    printf("It is not a valid triangle!");
  }
  return 0;
}
