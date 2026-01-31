/*write a function for
i) Summation of digits of a number repeatedly until results become single digit.
e.g: 567=18=9
ii) Find the length of a string.
iii) Write a user define function to calculate nCr*/

//(i)
/*#include<stdio.h>
int sum(int num) {
    while (num >= 10)
    {
        int sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Single digit sum: %d\n", sum(num));
    return 0;
}*/

//(ii)
/*#include<stdio.h>
int strlen(char str[]) {
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}
    int main() {
        char str[100];
        printf("Enter a string: ");
        scanf("%s",str);
        printf("Length of string: %d\n", strlen(str));
        return 0;
    }*/

    //(iii)
#include<stdio.h>
int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int ncr(int n, int r){
    return factorial(n) / (factorial(r) * factorial(n-r));
}
int main()
{
    int n,r;
    printf("Enter values of n and r: ");
    scanf("%d %d", &n, &r);
    if(r>n) {
        printf("Invalid Input");
    } else {
        printf("nCr = %d\n",ncr(n,r));
    }
    return 0;
}
