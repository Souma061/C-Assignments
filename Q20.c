/*Write a program in C to read a number n and print the following pattern (input = 5, expected output):


1
12
123
1234
12345
*/

#include<stdio.h>
int main() {
  int n;
  printf("Enter the number of column: ");
  scanf("%d" , &n);
  for(int i = 1; i <=n;i++) {
    for(int j = 1; j<= i;j++) {
      printf("%d " , j);
    }
    printf("\n");
  }
  return 0;
}
