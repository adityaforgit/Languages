//WAP in C to Calculate bonus of the employee based on the conditions (i) IF SALARY >10000 THEN “NO BONUS” (ii) IF SALARY <= 10000 THEN BONUS = 2000 (iii) IF AGE>=60 THEN BONUS=2000
#include<stdio.h>
int main()
{
    float salary; int age;
    printf("Enter your salary =");
    scanf("%f",&salary);
    printf("Enter your age =");
    scanf("%d",&age);
    if(age>=60){
        printf("BONUS = 2000");
    } 
     else if(salary<=10000 && age < 60){
        printf("Bonus = 2000");
    } else {
        printf("NO BONUS");
    }
     return 0;
}