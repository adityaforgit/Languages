//WAP in C to check whether a character is digit, letter or special character and print message accordingly. Note: 48—57(digit), 65---90(capital letter), 97---122 (small letter).
#include<stdio.h>
int main()
{
    char c;
    printf("Enter your character =");
    scanf("%c",&c);
    if(c>=48&&c<=57){
        printf("Digit");
    } else if(c>=65&&c<=90){
        printf("Capital letter");
    } else if(c>=97&&c<=122){
        printf("Small letter");
    } else{
        printf("The character is a special character");
    }
    return 0;
}