/*Write a program in C in compute the cubes of all numbers from 10 to 20.*/

#include<stdio.h>

int main() {
  int i;
  for(i = 10 ; i <= 20; i++) {
    int cube = i * i * i;
    printf("The cube of %d is %d\n" , i , cube);
  }
  return 0;
}
