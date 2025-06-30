/*Write some texts into a file, reopen the file in read mode and reproduce the text on the monitor
(use of putc() and fputc()).*/


#include<stdio.h>

int main() {
  FILE *fp;
  int i;
  char text[]= "My name is Soumabrata Ghosh.";

  fp = fopen("name.txt" , "w");
  if(fp == NULL) {
    printf("Error opening file.");
    return 1;
  }

  for(i = 0; text[i] != '\0' ; i++) {
    fputc(text[i] , fp);
  }

  fclose(fp);
   fp = fopen("name.txt" , "r");
   if(fp == NULL) {
    printf("Error opening file.");
    return 1;
  }
  int ch;
  printf("The file content: \n");
  while((ch = fgetc(fp)) != EOF) {
    putchar(ch);
  }

  fclose(fp);
  return 0;

}
