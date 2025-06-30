/* Write a program in C to read the data of a student, store it in a structure and display it.*/

#include<stdio.h>
#include<string.h>

struct student {
  int id;
  char name[50];
  float marks;
};

int main() {
  struct student s1;

  s1.id = 61;
  strcpy(s1.name, "Soumabrata Ghosh");
  s1.marks = 98.3;

  printf("Student ID: %d\n" , s1.id);
  printf("Student Name: %s\n" , s1.name);
  printf("Student Marks: %.2f\n" , s1.marks);
  return 0;
}
