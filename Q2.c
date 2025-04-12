//  Write a program in C to read two numbers and print the greater number, if both the numbers 
// are same them print EQUAL. 

#include<stdio.h>

int main() {

  int num1 , num2;

  printf("Enter the first number: ");
  scanf("%d" , &num1);
  printf("Enter the second number: ");
  scanf("%d" , &num2);


  if(num1 > num2) {
    printf("Greater number is %d\n" , num1);
  
  } else if (num2 > num1) {
    printf("Greater number is %d\n" , num2);
  } else {
    printf("EQUAL\n");
  }
  return 0;

}

