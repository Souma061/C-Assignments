/*Take input from user and print his name in vertical order*/

#include<stdio.h>

int main() {
  char name[50];
  printf("Enter your name: ");
  fgets(name , sizeof(name) , stdin);

  for(int i = 0; name[i] != '\0'; i++) {
    if(name[i] != '\n') {
      printf("%c\n" , name[i]);
    }
  }
  return 0;
}
