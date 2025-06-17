/*Write a program in C to illustrate the use of static variables.*/

#include<stdio.h>
void function() {
  static int cnt = 0; // static variable
  cnt++;
  printf("Count: %d\n" , cnt);
}
int main() {
  for(int i = 0; i < 5; i++) {
    function();

  }
  return 0;
}

//output:
// Count: 1
// Count: 2
// Count: 3
// Count: 4
// Count: 5

// The staic variable 'cnt' retains its value betweeen function calls.Each time the function is called, it increments the value of 'cnt' and prints it. The output shows that the value of 'cnt' increases with each call to the function, demonstrating the use of static variables in C.
