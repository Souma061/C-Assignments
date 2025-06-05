/*Input your name and check how many vowels are there */

#include<stdio.h>

int main() {
  char name[50];
  int cnt = 0;

  printf("Enter your name: ");
  fgets(name , sizeof(name) , stdin);

  for(int i = 0; name[i] != '\0'; i++) {
    char c = name[i];
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
       c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
      cnt++;
    }
  }
  printf("Number of vowels : %d\n" , cnt);
  return 0;
}
