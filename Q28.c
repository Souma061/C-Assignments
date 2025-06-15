/*Write a program in C to print all the Armstrong number from 1 to 500.*/

#include <stdio.h>

int main()
{
  int num, original_number, remainder, n , result;
  printf("Armstrong numbers from 1 to 500 are: \n");
  for (int i = 1; i <= 500; i++)
  {
    num  = i;
    n = 0;
    result = 0;
    original_number = num;

    while (original_number != 0)
    {

      original_number /= 10;
      n++;
    }

    original_number = num;

    while (original_number != 0)
    {
      remainder = original_number % 10;
      int power = 1;
      for (int i = 0; i < n; i++)
      {
        power *= remainder;
      }
      result += power;
      original_number /= 10;

    }
    if(result == num) {
      printf("%d\n" , num);
    }
  }
  return 0;
}
