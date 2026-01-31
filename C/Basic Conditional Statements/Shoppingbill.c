//WAP in C to Calculate shopping bill (items are shirt, trouser, tie) based on the condition(i) If amount >=5000 then discount 5% (ii) If amount >=10000 then discount 10% (iii) If shirt=’J’ then 2% extra discount on that particular item.
#include<stdio.h>
int main()
{
  float shirt,trouser,tie,totalamt,discount;
  char ch;
  printf("Enter amount of shirt =");
  scanf("%f",&shirt);
  printf("Enter amount of trouser =");
  scanf("%f",&trouser);
  printf("Enter amount of tie =");
  scanf("%f",&tie);
  printf("Enter shirt type =");
  scanf(" %c",&ch);
  if(ch == 'J'||ch =='j'){
    shirt *= 0.98;
  }
  totalamt =  shirt+trouser+tie;
  if(totalamt>=10000){
    discount = 10.0;
  } else if(totalamt>=5000){
    discount = 5.0;
  } else{
     discount = 0.0;
  }
  totalamt -= totalamt*(discount/100.0);
  printf("-------BILL--------");
  printf("\nAmount of Shirt =%f",shirt);
  printf("\nAmount of Trouser =%f",trouser);
  printf("\nAmount of tie =%f",tie);
  printf("\nTotal amount = %f",totalamt);
  return 0;
} 