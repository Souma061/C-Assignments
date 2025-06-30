/* Write a program in C to read two matrices and perform addition.*/

#include<stdio.h>

#define size 100

int main() {
  int matrix1[size][size] , matrix2[size][size] , resultant[size][size];
  int row1 , row2 , col1 , col2 , i , j ;

  printf("Enter rows and columns for the first matrix: \n");
  scanf("%d %d" , &row1 , &col1);
    printf("Enter rows and columns for the second matrix: \n");
  scanf("%d %d" , &row2 , &col2);

  if(row1 != row2 || col1 != col2) {
    printf("Dimensions does not match.");
    return 1;
  }

  printf("Enter elements for the first matrix: \n");
  for(i = 0;i < row1 ; i++) {
    for(j = 0;j < col1;j++) {
      scanf("%d" , &matrix1[i][j]);
    }
  }
    printf("Enter elements for the second matrix: \n");
  for(i = 0;i < row2 ; i++) {
    for(j = 0;j < col2;j++) {
      scanf("%d" , &matrix2[i][j]);
    }
  }

  for(i = 0;i<row1 ; i++) {
    for(j = 0;j < col1; j++) {
     resultant[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }

  printf("Addition: \n");
  for(i = 0; i < row1 ; i++) {
    for (j = 0; j < col1 ; j++)
    {
      printf("%d\t" , resultant[i][j]);
    }
    printf("\n");

  }
  return 0;
}
