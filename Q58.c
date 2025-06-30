/* Write programs to demonstrate the use of getc(), fgetc() and ungetc().*/

#include <stdio.h>

int main()
{
  FILE *fp;
  int ch;

  fp = fopen("hello.txt", "w");
  if (fp == NULL)
  {
    printf("Error opening file.");
    return 1;
  }

  char str[] = "Hello World!";
for(int i = 0; str[i] != '\0'; i++) {
    fputc(str[i], fp);
}
  fclose(fp);

  fp = fopen("hello.txt", "r");
  if (fp == NULL)
  {
    printf("Error opening file.");
    return 1;
  }

  printf("getc() method: \n");
  ch = getc(fp);
  printf("First character read with getc(): %c\n", ch);

  printf("fgetc() method: \n");
  ch = fgetc(fp);
  printf("Second character read with fgetc(): %c\n", ch);

  printf("ungetc() method: \n");
  ungetc(ch, fp);
  ch = fgetc(fp);
  printf("Character after ungetc() and fgetc(): %c\n", ch);

  fclose(fp);
  return 0;
}
