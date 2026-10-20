//CALCULATE SALARY OF AN EMPLOYEE. BASIC SALARY, DA, HRA, MA PERCENTAGE SHOULD BE GIVEN BY THE USER. GENERATE SALARY SLIP.
 #include<stdio.h>
int main()
{
   float bs,da,hra,ma;
   printf("Enter basic salary =");
   scanf("%f",&bs);
   printf("Enter DA percentage =");
   scanf("%f",&da);
   printf("Enter HRA percentage =");
   scanf("%f",&hra);
   printf("Enter MA percentage =");
   scanf("%f",&ma);
   float daamt,hraamt,maamt,Gross;
   daamt = (da*bs)/100;
   hraamt = (hra*bs)/100;
   maamt = (ma*bs)/100;
   Gross = bs+daamt+hraamt+maamt;
   printf("\n-------Salary Slip-------\n");
   printf("\nBasic Salary =%f",bs);
   printf("\nDA amount =%f",daamt);
   printf("\nHRA amount =%f",hraamt);
   printf("\nMA amount =%f",maamt);
   printf("\nGross Salary =%f",Gross);
    return 0;
}