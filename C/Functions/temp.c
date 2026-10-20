// WAP in C to convert celsius temperature to fahrenheit.
#include<stdio.h>
float temp(float c);
int main()
{
   float c,f;
   printf("Enter temperature in celsius = ");
   scanf("%f",&c);
   f = temp(c);
   printf("Temperature in Fahrenheit: %f\n",f);
   return 0;
}
float temp(float c){
    return(c*9/5)+32;
}  