#include<stdio.h>

int main() {

  float celcius , fahrenheit;
  printf("Enter the temperature in Celcius: ");
  scanf("%f" , &celcius);

  fahrenheit = (celcius * 9/5) + 32;
  printf("The temperature in fahrenheit = %f" , fahrenheit);
  return 0;
}  
