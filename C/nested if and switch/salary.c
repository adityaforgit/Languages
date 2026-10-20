/*A company decides to give bonus to all of it’s employees. A 5% bonus on salary
to the male workers. A 10% bonus on the salary to the female workers. If salary
of the employee is less than Rs. 10000 /- then the employee gets extra 2%
bonus. Calculate the bonus and the total salary of the employee.*/
#include<stdio.h>
int main()
{
    char gender;
    float bonus,salary,ts;
    printf("Enter your Gender (M/F) : ");
    scanf(" %c",&gender);
    printf("Enter your salary :");
    scanf("%f",&salary);
    if(gender == 'M' || gender == 'm') {
        bonus = 0.05*salary;
    } else if(gender == 'F' || gender == 'f') {
        bonus = 0.1*salary;
    } else {
        printf("Invalid Input");
        return 0;
    }
    if(salary<10000) {
        bonus += 0.02*salary; 
    }
    ts = salary + bonus;
    printf("Your bonus is %f",bonus);
    printf("Your total salary is %f",ts);
    return 0;
}