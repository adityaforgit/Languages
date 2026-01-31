//Write a program in C to print all even numbers between 1 and 50 using a for loop.
#include<stdio.h>
int main()
{
  int i;
  for(i=1;i<=50;i++){
    if(i%2==0){
    printf("%d\n",i);
    } 
  }
  return 0;
}