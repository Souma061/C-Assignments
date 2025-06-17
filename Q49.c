/* Write a program in C to show the use of Array, declared dynamically to read 10 numbers and
display them.*/

#include<stdio.h>
#include<stdlib.h>

int main() {
  int *arr = (int *)malloc(10 * sizeof(int));

  if(arr == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  printf("Enter 10 numbers: \n");
  for(int i = 0 ; i < 10 ; i++) {
    scanf("%d" , &arr[i]);
  }
  printf("You entered:  \n");
  for(int i = 0; i < 10; i++) {
    printf("%d " , arr[i]);
  }
  free(arr);
  return 0;
}
