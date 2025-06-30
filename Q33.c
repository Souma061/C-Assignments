/* Accept inputs from the user and echo it on to the screen in normal as well as in reverse using*/
#include<stdio.h>
#include<string.h>

void reverse_word(char *start , char *end) {
  char temp;
  while(start < end) {
    temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
}

int main() {
  char str[100];

  printf("Enter a string: ");
  fgets(str , sizeof(str) , stdin);

  str[strcspn(str , "\n")] = 0;

  printf("You entered: %s" , str);
  reverse_word(str , str + strlen(str) - 1);
  printf("\nReversed: %s\n" , str);
  return 0;
}
