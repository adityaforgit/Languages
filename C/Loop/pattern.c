/*Generate the pattern

(i)     *
      *   *
    *       *
  * *  *  * * *
(ii) F E D C B A
       E D C B A
         D C B A
           C B A
             B A
               A

(iii)    1
       1 2 1
     1 2 3 2 1
   1 2 3 4 3 2 1*/

//(i)
/*#include<stdio.h>
int main()
{
    int n = 4; // Number of rows
    for (int i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        // Print stars and spaces for the pattern
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}*/
//(ii)
/*#include<stdio.h>
int main()
{
  int n = 6;
  for(int i =0; i<n; i++){
    for(int j = 0; j<i; j++){
      printf("  ");
    }
    for (char ch = 'F'-i; ch >= 'A'; ch--)
    {
      printf("%c",ch);
    }
    printf("\n");
  }
  return 0;
}*/
//(iii)
/*#include<stdio.h>
int main()
{
  int n =4;
  for(int i =1; i<=n; i++){
    for(int j =1; j<=n-i; j++){
      printf("  ");
    }
    for (int j = 1; j <= i; j++)
    {
      printf("%d ",j);
    }
    for (int j = i-1; j >= 1; j--)
    {
      printf("%d ",j);
    }
    printf("\n");
     }
     return 0;
}*/
/*print a multiplication table of n
0 1 2 3
1 1 2 3
2 2 4 6
3 3 6 9*/
#include <stdio.h>

int main() {
    for (int i = 0; i <= 3; i++) {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 1; i <= 3; i++) {
        printf("%d ", i);
        for (int j = 1; j <= 3; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }
    return 0;
}
  