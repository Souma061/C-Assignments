/*Write a program in C to show the use of Array, declared at compilation time (static manner) to
read 10 numbers and display them.*/

#include<stdio.h>
int main() {
  int arr[10];

  printf("Enter 10 numbers: \n");
  for(int i = 0; i<10 ; i++) {
    scanf("%d" , &arr[i]);
  }
  printf("You entered:  \n");
  for(int i = 0; i< 10 ; i++) {
    printf("%d " , arr[i]);
  }
  return 0;
}
