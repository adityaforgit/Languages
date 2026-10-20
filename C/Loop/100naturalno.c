//Write a program in C to calculate the sum of the first 100 natural numbers using a while loop.
#include<stdio.h>
int main()
{
 /*   int i=1,sum=0;
    while(i<=100){
        sum += i;
        i++;
    }
   printf("The sum from 1 to 100= %d",sum);
   return 0;*/
   int sum =0;
   for(int i = 1;i<=100;i++){
    sum+=i;
    }
   printf("The sum from 1 to 100= %d",sum);
   return 0;
}