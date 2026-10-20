/*Write following program using recursive function
i) Generate Fibonacci series
ii) Calculate x y
iii) Calculate GCD*/
 
//(i)
/*#include<stdio.h>
int fibonacci(int n) {
    if (n == 0) 
    return 0;
    else if(n==1)
    return 1;
    else 
    return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
    int n,i;
    printf("Enter the number of terms in fibonacci series: ");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d",fibonacci(i));
    }
    printf("\n");
    return 0;
}*/

//(ii)
/*#include<stdio.h>
int power(int x, int y) {
    if (y == 0) 
    return 1;
    else 
    return x * power(x,y-1);
}
int main()
{
    int x,y;
    printf("Enter the base: ");
    scanf("%d",&x);
    printf("Enter the exponent: ");
    scanf("%d",&y);
    printf("%d^%d = %d\n",x,y,power(x,y));
    return 0;
}*/

//(iii)

#include<stdio.h>
int gcd(int a , int b) {
    if (b == 0)
    return a;
    else 
    return gcd(b ,a%b);
}
int main()
{
    int a,b;
    printf("Enter two numbers :");
    scanf("%d %d", &a , &b);
    printf("GCD of %d and %d is %d\n", a,b,gcd(a,b));
    return 0;
}