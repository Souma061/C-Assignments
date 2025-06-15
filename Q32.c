/*Write a program in C to find solution of a quadratic equation [ 𝑥 =
  (-b ± √(b^2 - 4ac)) ] / 2a.*/

  #include<stdio.h>
  #include<math.h>

  int main() {
    double a , b ,c , discriminant , r1 , r2 , imaginary_part;

    printf("Enter coefficients of a , b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if(a == 0) {
      printf("Coefficient 'a can't be zero.\n");
    } else if(discriminant > 0) {
      r1 = (-b + sqrt(discriminant)) / (2 * a);

      r2 = (-b - sqrt(discriminant)) / (2 * a);

      printf("Roots are real and different.\n");
      printf("Root 1 = %.2lf\n" , r1);
      printf("Root 2 = %.2lf\n" , r2);
    } else if(discriminant == 0) {
      r1 = r2 = -b / (2 * a);
      printf("Roots are real and same.\n");
      printf("Root 1 = Root 2 = %.2lf\n" , r1);
    } else {
      r1 = -b / (2 * a);
      imaginary_part = sqrt(-discriminant) / (2 * a);
      printf("Roots are complex and different.\n");
      printf("Root 1 = %.2lf + %.2fi\n" , r1 , imaginary_part);
      printf("Root 2 = %.2lf - %.2fi\n" , r1 , imaginary_part);
    }
    return 0;
  }
