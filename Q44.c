/* Write a program in C to sum integers and use static variable to store the cumulative sum.
*/

#include <stdio.h>

void add_to_sum(int num) {
  static int cumulative_sum = 0;
  if (num >= 0)
    cumulative_sum += num;
  else
    printf("Cumulative sum of the entered numbers: %d\n", cumulative_sum);
}

int main() {
  int num;
  printf("Enter numbers (negative to stop):\n");

  while (1) {
    scanf("%d", &num);
    add_to_sum(num);
    if (num < 0)
      break;
  }

  return 0;
}
