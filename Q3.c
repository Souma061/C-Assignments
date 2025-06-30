// Write a program in C multiple numbers say n and print the greatest
// and the third greatest

#include<stdio.h>

void sort_descending(int arr[] , int n) {

  for(int i=0 ; i < n-1 ; i++) {
    for(int j = 0; j < n - 1; j++) {
      if (arr[j] < arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

int main () {
  int n;
  printf("Enter the number of elements: ");
  scanf("%d" , &n);

  if ( n < 3) {
    printf("You need to enter minimum 3 numbers.\n");
  }
  int arr[n];

  printf("Enter %d numbers: \n" , n);
  for (int i = 0; i < n; i++){
    scanf("%d" , &arr[i]);
  }

  sort_descending(arr , n);

  printf("The geratest number is: %d\n" , arr[0]);
  printf("The thid greatest number is: %d\n" , arr[2]);
  return 0;
  
}
