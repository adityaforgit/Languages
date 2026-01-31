/*Write a program to calculate tax, given the following conditions
 If income is less than 1,50,000 then no tax.
 If taxable income is in the range 1,50,001-3,00,000 then charge 10%tax.
 If taxable income is in the range 3,00,001-5,00,000 then charge 20%tax.
 If taxable income is above 5,00,001 then charge 30% tax*/
#include<stdio.h>
int main()
{
    float income,tax;
    printf("Enter your income :");
    scanf("%f",&income);
    if(income<150000) {
        tax = 0;
    } else if(income>150000 && income <= 300000) {
        tax = 0.1 * income;
    } else if(income>300000 && income <= 500000) {
        tax = 0.2 * income;
    } else {
        tax = 0.3 * income;
    }
    printf("Your tax is %f",tax);
    return 0;
}