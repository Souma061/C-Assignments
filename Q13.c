#include<stdio.h>

int main() {
  float length , breadth , area , perimeter;
  printf("Enter the length in meters: ");
  scanf("%f" , &length);
   printf("Enter the breadth in meters: ");
  scanf("%f" , &breadth);

  area = length * breadth;
  perimeter = 2 * (length + breadth);

  printf("The area is %.2f square meters\n" , area);
  printf("The perimeter is %.2f meters\n" , breadth);

  if(length == breadth) {
    printf("This is a square");

  } else {
    printf("This is a rectangle");
  }
  return 0;

}
