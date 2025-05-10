#include<stdio.h>

int main() {
  int n;
  double sum = 0.0;
  printf("Enter the number upto which you want to print: ");
  scanf("%d" , &n);

  if(n<=0) {
    printf("Enter a positive integer value: ");

  }

  for(int i=1;i<=n;i++) {
    sum += 1.0/i;
  }

  printf("The sum of harmonic series upto 1/%d is : %.6f " , n , sum);
  return 0;


}
