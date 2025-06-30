/* Write a program in C to use a double dimensional array and print each cells value and address.*/

#include <stdio.h>

int main()
{
  int arr[3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}};
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("Value at arr[%d][%d] = %d , Address = %p\n", i, j, arr[i][j], (void *)&arr[i][j]);
    }
  }
  return 0;
}
