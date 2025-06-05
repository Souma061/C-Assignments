/*Take input from user and print his name vertically reverse order*/

#include<stdio.h>

int main() {
  char name[50];
  printf("Enter your name: ");
  fgets(name , sizeof(name) , stdin);

  int length = 0;
  while(name[length] != '\0') {
    length++;
  }

  for(int i = length - 2; i >= 0; i--) {
    if(name[i] != '\0' && name[i] != '\n') {
      printf("%c\n" , name[i]);
    }
  }
  return 0;
}
