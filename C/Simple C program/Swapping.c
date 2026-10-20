//WRITE A PROGRAM IN C FOR SWAPPING 2 VALUES. DO NOT USE ANY THIRD VARIABLE.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 1st number =");
    scanf("%d",&a);
    printf("Enter 2nd number =");
    scanf("%d",&b);
    a = a+b;
    b = a-b; 
    a = a-b;
    printf("After swapping a =%d",a);
    printf("After swapping b =%d",b);
    return 0;
}