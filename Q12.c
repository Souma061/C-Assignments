#include<stdio.h>
#include<stdlib.h>

int main() {
  float n;
  int integralPart,RightMostDigit;
  printf("Enter the floating-point number: ");
  scanf("%f" , &n);


  integralPart = (int) n;
  RightMostDigit = abs(integralPart %10);

  printf("The rightmost digit of the integral part is %d" , RightMostDigit);




}
