/*Print a BILL-FORMAT where user inputs are:-

UNIT                   RATE
0 – 150            Rs. 3/- per unit
151 – 350          Rs. 100 + Rs. 3.75 /- per unit
351 – 450          Rs. 250 + Rs. 4 /- per unit
451 – 600          Rs. 300 + Rs. 4.25/- per unit
Greater than 600   Rs. 400 + 5 /- per unit*/
#include<stdio.h>
int main()
{
    float unit,amount;
    printf("Enter unit:");
    scanf("%f",&unit);
    if(unit >=0 && unit <= 150){
        amount = 3*unit;
    } else if(unit > 150 && unit <= 350)
    {
        amount = (3.75*unit)+100;
    } else if(unit > 350 && unit <= 450) {
        amount = (4*unit) + 250;
    } else if (unit > 450 && unit <= 600)
    {
        amount = (4.25*unit) + 300;
    } else {
        amount = (5*unit) + 400;
    }
    printf("Your bill is %f",amount);
    return 0;
}