//Write a program in C to calculate the factorial of a given number using a do-while loop.
#include<stdio.h>
int main()
{
    int i,n;
    long factorial = 1;
    printf("Enter your number =");
    scanf("%d",&i); 
    if(i<0){
        printf("Factorial of negative number does not exist.");
} else{
     n =1;
    do{
        factorial*=n;
        n++;
    } while(n<=i);
    printf("Factorial of %d= %ld\n",i,factorial);
}
return 0;
}