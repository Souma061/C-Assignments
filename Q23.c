/* Write a program in C to read a string and store it into a character array. Check whether the string is a palindrome or not and display accordingly.*/
#include<stdio.h>
#include<string.h>

int main() {
  char str[100] , reversed[100];
  int length , i , is_palindroem = 1;

  printf("Enter a string: ");
  scanf("%s" , str);

  length = strlen(str);

  for(i = 0;i < length ; i++) {
    reversed[i] = str[length - i - 1];
  }
  reversed[length] = '\0';

  for(i = 0;i<length;i++) {
    if(str[i] != reversed[i]) {
      is_palindroem = 0;
      break;
    }
  }
  if(is_palindroem) {
    printf("The string is a palindrome.");
  } else {
    printf("The string is not a palindrome.");
  }
  return 0;
}
