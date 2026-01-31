/*Write a program to calculate Body mass index.
conditions : BMI > 25----OVERWEIGHT
18.5 < BMI < 25-----HEALTHY*/
#include<stdio.h>
int main()
{
    double weight,height,bmi;
    printf("Enter your weight(in kilograms)= ");
    scanf("%lf",&weight);
    printf("Enter your height(in metres) =");
    scanf("%lf",&height);
    bmi = weight/(height*height);
    if(bmi>18.5&&bmi<25){
        printf("HEALTHY");
    } else if(bmi>25){
        printf("OVERWEIGHT");
    } else {
        printf("You are not human");
    }
}