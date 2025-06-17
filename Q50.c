/* Write a program in C to read a string in a dynamic array and determine whether it is palindrome
or not.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
  char *str;
  int length , i , isPalindrome = 1;
  str = (char *)malloc(100 * sizeof(char));
  if(str == NULL) {
    printf("Memory allocation faiiled.\n");
    return 1;
  }
  printf("Enter a string: ");
  fgets(str , 100 , stdin);
  length = strlen(str);

  if(str[length - 1] == '\n') {
    str[length - 1] = '\0';
    length--;
  }
  for(i = 0; i < length / 2; i++) {
    if(str[i] != str[length - i - 1]) {
      isPalindrome = 0;
      break;
    }

  }
  if(isPalindrome) {
    printf("The string is a palindrome.\n");
  } else {
    printf("The string is not a palindrome.\n");
  }
  free(str);
  return 0;
}
