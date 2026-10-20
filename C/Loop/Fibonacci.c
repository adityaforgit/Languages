//Write a program in C to print the first 10 numbers of the Fibonacci series using a while loop.
#include<stdio.h>
int main()
{
    int i=0,j=1,next,term;
    int count = 0;
    printf("Enter number of terms =");
    scanf("%d",&term);
    printf("The first %d numbers in fibonacci series are:\n",term);
    while(count<term){
        printf("%d",i);
        next = i+j;
        i = j;
        j = next;
        count++;
    }
    printf("\n");
    return 0;
}