#include<stdio.h>

int main() {
  int n;
  float sum = 0 , average;

  printf("Enter the number of elements: ");
  scanf("%d" , &n);

  float numbers[n];

  printf("Enter the numbers: \n");
  for(int i = 0; i < n; i++) {
    scanf("%f", &numbers[i]);
    sum += numbers[i];
  }

  average = sum / n;
  printf("Average: %.2f\n", average);
  
}