#include<stdio.h>
#include<ctype.h>

int main() {
  char str[100];
  int i=0;

  printf("Enter a word: ");
  scanf("%s" , &str);

  while(str[i] != '\0') {
    if(islower(str[i])) {
      printf("%c" , toupper(str[i]));
    } else if(isupper(str[i])) {
      printf("%c" , tolower(str[i]));
    } else {
      printf("%c" , str[i]);
    }
    i++;
  }
  printf("\n");
  return 0;
}
