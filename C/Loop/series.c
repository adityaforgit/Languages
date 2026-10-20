/*Evaluate the series using C language
i) sum= 1 + 2*1 + 3*2 + ……….. n th term
ii) Sum= 1 + 2^2+ 3^3 +……n th term
iii) sum= 1 - 1/3 + 1/5 - 1/7 + 1/9 - ………….n th term
iv) sum= x - x^3/3! + x^5/5! - x^7/7! + ………….. n th term*/


//(i)
/*#include<stdio.h>
int main()
{
    int num,sum = 1;
    printf("Enter a number =");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
       sum += i*(i-1);
    }
    printf("The sum of series upto %d terms is %d",num,sum);
    return 0;
}*/
//(ii)
/*#include<stdio.h>
#include<math.h>
int main()
{
 int num,sum = 0;
    printf("Enter a number =");
    scanf("%d",&num);
    for(int i =1; i<= num; i++){
        sum += pow(i,i)/i;
    }
    printf("Sum of series: %d\n",sum);
    return 0;
}*/
//(iii)
/*#include <stdio.h>

int main() {
    int n, sign = 1;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int k = 1; k <= n; k++) {
        double denominator = 2 * k - 1;
        double term = sign / denominator;
        sum += term;
        sign *= -1; 
    }

    printf("The sum of the series up to %d terms is: %lf\n", n, sum);
    return 0;
}*/
//(iv)
#include<stdio.h>
#include<math.h>
int main()
{
    int x,num,sign =1;
    double sum = 0.0,term;
    printf("Enter value of x =");
    scanf("%d",&x);
    printf("Enter number of terms = ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        int power = 2*i-1;
        long fact = 1;
        for (int j = 1; j <= power; j++)
        {
            fact*= j;
        }
        term = pow(x,power)/fact;
        sum += sign*term;
        sign *= -1;
    }
    printf("The sum of series upto %d terms is %lf",num,sum);
    return 0;
    
}