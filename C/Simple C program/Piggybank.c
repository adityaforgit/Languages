//Write a program to calculate the total amount of money in the piggybank, given the coins of Rs. 10, Rs. 5, Rs. 2, Rs. 1 .
#include<stdio.h>
int main()
{
    int ten,five,two,one,total;
    printf("Enter 10 rupee coins =");
    scanf("%d",&ten);
    printf("Enter 5 rupee coin =");
    scanf("%d",&five);
    printf("Enter 2 rupee coin =");
    scanf("%d",&two);
    printf("Enter 1 rupee coin =");
    scanf("%d",&one);
    total = (10*ten)+(5*five)+(2*two)+(1*one);
    printf("The total amount in piggy bank is %d",total);
    return 0;

}