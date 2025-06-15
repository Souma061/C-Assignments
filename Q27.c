/*Write a program in C to read a string and print the triangular pattern using the string.
Functions*/

#include<stdio.h>
#include<string.h>

int main() {
  char str[100];
  int len;
  printf("Enter a string: ");
  scanf("%s" , str);

  len = strlen(str);
  printf("Triangular patter: \n");
  for(int i = 0; i < len ; i++) {
    for(int j = 0; j<=i ; j++) {
      printf("%c" , str[j]);
    }
    printf("\n");
  }
  return 0;


}
