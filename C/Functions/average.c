//WAP in C to calculate average of three numbers.
#include<stdio.h>
float calcaverage(float num1, float num2, float num3);
int main()
{
float num1,num2,num3,average;
printf("Enter three numbers =");
scanf("%f %f %f", &num1,&num2,&num3);
average = calcaverage(num1,num2,num3);
printf("The average of three numbers is: %f\n",average);
return 0;
}
float calcaverage(float num1,float num2,float num3){
    return (num1+num2+num3)/3;
}

