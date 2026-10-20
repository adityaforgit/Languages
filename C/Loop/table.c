//Write a program in C to print the multiplication table of a given number using a for loop.
#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter your number =");
    scanf("%d",&i);
    printf("Multiplication table of %d:\n",i);
    for(j=1;j<=10;j++){
      printf("%d x %d = %d\n", i, j, i*j);
      
    }
    return 0;

}