/*Write a program in C to generate all combinations of 1, 2, 3, 4 using recursion, e.g.,1234,
2341….. etc.*/

#include<stdio.h>

void swap(char *x , char *y) {
  char temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

void generate(char *arr , int start , int end) {
  if(start == end) {
    for(int i = 0; i <=end ; i++) {
      printf("%c" , arr[i]);
    }
    printf("\n");
    return;
  }
  for(int i = start ; i <=end ; i++) {
    swap(&arr[start] , &arr[i]);
    generate(arr , start + 1 , end);
    swap(&arr[start] , &arr[i]);
  }
}


int main() {
  char arr[] = {'1' , '2' , '3' , '4'};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("All combinations of 1 , 2, 3, 4:\n");
  generate(arr , 0 , n - 1);
  return 0;
}
