//Print your grade according to your total number.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter your number =");
    scanf("%d",&num);
    switch (num/10)
    {
    case 9 :
        printf("A+");
        break;
    case 8 :
        printf("A");
        break;
    case 7 :
        printf("B");
        break;
    case 6 :
        printf("C");
        break;
    case 5 :
        printf("D");
    case 4 :
        printf("E");
    default:
        printf("F");
        break;
    }
    return 0;
}