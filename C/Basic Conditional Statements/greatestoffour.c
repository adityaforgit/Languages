// WAP to find the greatest of four number entered by user.
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter four nunmbers =");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b&&a>c&&a>d){
        printf("The greatest is %d",a);
    } else if(b>a&&b>c&&b>d){
        printf("The greatest is %d",b);
    } else if(c>a&&c>b&&c>d){
        printf("The greatest is %d",c);
    } else{
        printf("The greatest is %d",d);
    }
    return 0;
}