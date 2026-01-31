//WAP in C to calculate the area based on 3 sides given by the user.
#include<stdio.h>
#include<math.h>
int main()
{
    int  a,b,c;
    double area,s;
    printf("Enter three sides =");
    scanf("%d%d%d",&a,&b,&c);
    s = (a+b+c)/2.0;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The required area is:%lf\n",area);
    return 0;
}