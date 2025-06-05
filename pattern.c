#include<stdio.h>

int main() {
  // int n;
  // printf("Number of lines: ");
  // scanf("%d" , &n);

  // for(int i=1;i<=n;i++) {
  //   for(int j=0;j<i;j++) {
  //     printf("%c " , 'A' +  j);
  //   }
  //   printf("\n");
  // }
  // return 0;

    int Ln, UpLn = 1, Spc, Cnt, Asc;

    for(Ln = 1; Ln <= 7; Ln++) {
        printf("\n");

        // LEFT ALPHABETS
        Asc = 65; // 'A'
        Cnt = Ln;
        for(; Cnt < 7; Asc++, Cnt++) {
            printf(" %c ", Asc);
        }

        // SPACES
        for(Spc = 1; Spc <= UpLn; Spc++) {
            printf("   ");
        }

        // RIGHT ALPHABETS (mirror)
        Asc--; // go back to last printed char
        for(; Asc >= 65; Asc--) {
            printf(" %c ", Asc);
        }

        UpLn += 2; // increment space width
    }

    return 0;
}


