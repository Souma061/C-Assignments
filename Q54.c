/*Write a program in C to accept students’ data from the user. Check if the student stream is
science, commerce or arts. If the stream is arts, then print the class of students. If the stream is
science, then print the grade and if the stream is commerce, then print the percentage.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct student
{
  char name[50];
  char stream[20];
  float marks;
};

// Function to clear input buffer
void clearInputBuffer()
{
  int c;
  while ((c = getchar()) != '\n' && c != EOF)
    ;
}

// Function to convert string to lowercase
void toLowerCase(char *str)
{
  for (int i = 0; str[i]; i++)
  {
    str[i] = tolower((unsigned char)str[i]);
  }
}

int main()
{
  struct student s;

  // Get student name
  printf("Enter your name: ");
  fgets(s.name, sizeof(s.name), stdin);
  s.name[strcspn(s.name, "\n")] = 0; // Remove newline if present

  // Get stream
  printf("Enter stream (Science / Arts / Commerce): ");
  fgets(s.stream, sizeof(s.stream), stdin);
  s.stream[strcspn(s.stream, "\n")] = 0; // Remove newline if present
  toLowerCase(s.stream);                 // Convert to lowercase for comparison

  // Get marks with validation
  do
  {
    printf("Enter marks (0-100): ");
    if (scanf("%f", &s.marks) != 1 || s.marks < 0 || s.marks > 100)
    {
      printf("Invalid marks! Please enter a value between 0 and 100.\n");
      clearInputBuffer();
      continue;
    }
    break;
  } while (1);
  printf("\nStudent Details:\n");
  printf("Name: %s\n", s.name);

  if (strcmp(s.stream, "arts") == 0)
  {
    if (s.marks >= 60)
    {
      printf("Class: First class\n");
    }
    else if (s.marks >= 45)
    {
      printf("Class: Second class\n");
    }
    else
    {
      printf("Class: Pass\n");
    }
  }
  else if (strcmp(s.stream, "science") == 0)
  {
    if (s.marks >= 75)
    {
      printf("Grade: A\n");
    }
    else if (s.marks >= 60)
    {
      printf("Grade: B\n");
    }
    else
    {
      printf("Grade: C\n");
    }
  }
  else if (strcmp(s.stream, "commerce") == 0)
  {
    printf("Percentage: %.2f%%\n", s.marks);
  }
  else
  {
    printf("Invalid stream choice.\n");
    printf("Valid streams are: Science, Arts, Commerce\n");
  }

  return 0;
}
