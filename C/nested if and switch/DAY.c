//Print the name of the DAY with the DAY-NUMBER being inputted by the user, using switch case.
#include<stdio.h>
int main()
{
  int day;
  printf("Enter day: ");
  scanf("%d",&day);
  switch (day)
  {
  case 1:
    printf("Monday");
    break;
    case 2:
    printf("Tuesday");
    break;
    case 3:
    printf("Weenesday");
    break;
    case 4:
    printf("Thursday");
    break;
    case 5:
    printf("Friday");
    break;
    case 6:
    printf("Saturday");
    break;
    case 7:
    printf("Sunday");
    break;
   default:
   printf("Enter valid day");
    break;
  }
  return 0;
}