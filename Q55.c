/* Write a program in C showing the technique of opening and closing a file say result.dat and
writing a list of numbers and its square into the file.*/


#include<stdio.h>

int main() {
  FILE *fp;
  int i;

  fp = fopen("result.dat" , "w");
  if(fp == NULL) {
    printf("Error opening file.");
    return 1;
  }

  fprintf(fp , "Number :- Square\n");
  for(i=1; i<=10;i++) {
    fprintf(fp, "%d :- %d\n" , i, i*i);

  }
  fclose(fp);

  printf("Numbers and their squares printed successfully.");
  return 0;
}

