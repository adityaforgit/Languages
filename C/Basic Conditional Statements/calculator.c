//WAP in C to design a simple calculator.
#include<stdio.h>
int main()
{
  char operator;
  double num1,num2,result;
  printf("Enter an operator (+,-,*,/):");
  scanf("%c",&operator);
  printf("Enter two operands: ");
  scanf("%lf %lf",&num1,&num2);
  switch (operator)
  {
  case '+':
    result = num1+num2;
    break;
  case '-':
  result = num1 - num2;
    break;
  case '*':
  result = num1*num2;
  break;
  case '/':
  if(num2 != 0){
    result = num1/num2;
  } else {
    printf("Error ! Operator is not correct.\n");
    return 0;
  }
  break;
  default:
  printf("Error! Operator is not correct.\n");
  return 0;
  }
  printf("Result: %lf\n",result);
  return 0;
}