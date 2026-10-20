//Convert small letter into capital letter and vice versa.
#include<stdio.h>
int main()
{
    char c;
    printf("Enter a letter: ");
    scanf("%c",&c);
    if(c>='a' && c <='z'){
        c = c-'a' + 'A';
        printf("Converted letter: %c",c);
    } else if(c>='A' && c<='Z'){
        c = c-'A'+'a';
        printf("Converted letter: %c",c);
    } else{
        printf("The character is not a letter");
    }
    return 0;
}