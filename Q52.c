/*Write a program in C to read the data of many students, store it in a structure and display the
student’s data and average percentage of the class.*/

#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 10

struct students
{
  int id;
  char name[50];
  float marks;
};

// Function to clear input buffer
void clearInputBuffer()
{
  int c;
  while ((c = getchar()) != '\n' && c != EOF)
    ;
}

int main()
{
  struct students S[MAX_STUDENTS];
  int n, i;
  float totalMarks = 0.0, average;

  printf("Enter the number of students(max %d): ", MAX_STUDENTS);
  scanf("%d", &n);
  clearInputBuffer(); // Clear buffer after reading number

  if (n > MAX_STUDENTS || n <= 0)
  {
    printf("Invalid number of students.\n");
    return 1;
  }

  for (i = 0; i < n; i++)
  {
    printf("\nEnter details of student %d:\n", i + 1);

    printf("Enter ID: ");
    if (scanf("%d", &S[i].id) != 1)
    {
      printf("Invalid ID input.\n");
      clearInputBuffer();
      i--; // Retry this student
      continue;
    }
    clearInputBuffer();

    printf("Enter Name: ");
    fgets(S[i].name, 50, stdin);
    // Remove newline if present
    size_t len = strlen(S[i].name);
    if (len > 0 && S[i].name[len - 1] == '\n')
    {
      S[i].name[len - 1] = '\0';
    }

    printf("Enter Marks: ");
    if (scanf("%f", &S[i].marks) != 1 || S[i].marks < 0)
    {
      printf("Invalid marks input. Please enter a valid positive number.\n");
      clearInputBuffer();
      i--; // Retry this student
      continue;
    }
    clearInputBuffer();

    totalMarks += S[i].marks;
  }

  average = totalMarks / n;

  printf("\nStudent Details:\n");
  printf("ID\tName\t\tMarks\n");
  printf("----------------------------------------\n");
  for (i = 0; i < n; i++)
  {
    printf("%d\t%-20s\t%.2f\n", S[i].id, S[i].name, S[i].marks);
  }
  printf("----------------------------------------\n");
  printf("Class Average: %.2f\n", average);

  return 0;
}
