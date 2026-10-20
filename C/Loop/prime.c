// WAP to check a number is prime number.
#include<stdio.h>
int main()
{
    int num,prime=0,i;
    printf("Enter a numnber =");
    scanf("%d",&num);
    if(num<=1){
       printf("%d is not a prime number.",num);
    } else {
        for(i=2;i<=num/2;i++){
            if(num%i == 0){
                prime = 1;
                break;
            }
        }
        if(prime == 0){
            printf("%d is a prime number",num);
        } else{
            printf("%d is not a prime number",num);
        }
    }
   
}