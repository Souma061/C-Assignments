/*Write a program in C to read a list of numbers stored in an integer array and while saving them in ascending order.*/

#include<stdio.h>

#define size 100

int main() {
  int arr[size] ;
  int n , i, j , temp;

  printf("Enter the number of elements: ");
  scanf("%d" , &n);

  if(n > size || n < 0) {
    printf("Invalid number.");
    return 1;
  }

  for(i = 0; i < n;i++) {
    scanf("%d" , &arr[i]);
  }

  for(i = 0;i < n - 1;i++) {
    for(j = 0;j < n - i - 1;j++) {
      if(arr[j] > arr[j + 1]) {
        temp = arr[j] ;
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  printf("Arranging in ascending order: ");
  for(i = 0; i < n;i++) {
    printf("%d ," , arr[i]);
  }
 return 0;

}
