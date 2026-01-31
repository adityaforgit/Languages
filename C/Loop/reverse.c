//Write a program in C to reverse a given integer number using a while loop.
#include<stdio.h>
int main()
{
    int num,reversenum = 0,remainder;
    printf("Enter an integer :");
    scanf("%d",&num);
    while(num!=0){
        remainder = num%10;
        reversenum = reversenum*10+remainder;
        num /= 10;
    }
    printf("Reversed number: %d\n",reversenum);
    return 0;
}