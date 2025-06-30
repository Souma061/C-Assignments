#include<stdio.h>

int main() {
  int n;
  printf("How many numbers you want to enter: ");
  scanf("%d" , &n);

  int arr[n];

  printf("Enter %d numbers: " , n);
  for(int i = 0; i < n; i++) {
    scanf("%d" , &arr[i]);
  }

  for(int i = 0; i < n; i++) {
    if(arr[i] %2 == 0) {
      printf("%d is even\n" , arr[i]);
    } else {
      printf("%d is odd\n" , arr[i]);
    }  

    
  }
  return 0;
}

