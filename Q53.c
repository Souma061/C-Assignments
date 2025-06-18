/* Write a program in C to accept two dates from the user, validate both of them and check if they
are different dates.*/

#include <stdio.h>

struct Date
{
  int day;
  int month;
  int year;
};

int leapYear(int year)
{
  return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

const int daysInMonth[] = {31, 28, 31, 30, 31, 30,
                           31, 31, 30, 31, 30, 31};

int validDate(struct Date date)
{
  // Check for negative year
  if (date.year < 0)
  {
    printf("Year cannot be negative.\n");
    return 0;
  }

  // Check month range
  if (date.month < 1 || date.month > 12)
  {
    printf("Month should be between 1 and 12.\n");
    return 0;
  }

  // Calculate max days for the month
  int maxDay = daysInMonth[date.month - 1];
  if (date.month == 2 && leapYear(date.year))
  {
    maxDay = 29;
  }

  // Check day range
  if (date.day < 1 || date.day > maxDay)
  {
    printf("Day should be between 1 and %d for month %d.\n", maxDay, date.month);
    return 0;
  }

  return 1;
}

int equalDates(struct Date date1, struct Date date2)
{
  return (date1.day == date2.day &&
          date1.month == date2.month &&
          date1.year == date2.year);
}

int main()
{
  struct Date date1, date2;
  int valid1, valid2;

  printf("Enter first date (dd mm yyyy): ");
  if (scanf("%d %d %d", &date1.day, &date1.month, &date1.year) != 3)
  {
    printf("Invalid input format for first date.\n");
    return 1;
  }

  printf("Enter second date (dd mm yyyy): ");
  if (scanf("%d %d %d", &date2.day, &date2.month, &date2.year) != 3)
  {
    printf("Invalid input format for second date.\n");
    return 1;
  }

  // Validate both dates
  valid1 = validDate(date1);
  valid2 = validDate(date2);

  // Only compare if both dates are valid
  if (!valid1 || !valid2)
  {
    printf("Cannot compare dates due to validation errors.\n");
    return 1;
  }

  // Print the formatted dates and comparison result
  printf("\nFirst date: %02d/%02d/%04d\n", date1.day, date1.month, date1.year);
  printf("Second date: %02d/%02d/%04d\n", date2.day, date2.month, date2.year);

  if (equalDates(date1, date2))
  {
    printf("\nThe dates are the same.\n");
  }
  else
  {
    printf("\nThe dates are different.\n");
  }

  return 0;
}
