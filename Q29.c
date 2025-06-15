/*Write a function convert () that returns a weight in Kg after being given a weight in pounds.*/

#include<stdio.h>

double convert(double pounds) {
  double kg = pounds * 0.45359237;
  return kg;
}


int main() {
  double pounds;
  printf("Enter weight in pounds: ");
  scanf("%lf" , &pounds);

  double kg = convert(pounds);
  printf("Weight(in Kg) = %.2f kg\n" , kg);
  return 0;
}
