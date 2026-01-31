// WAP in C to check a character is vowel or consonant
#include<stdio.h>
int main()
{
    char c;
    printf("Enter your character =");
    scanf("%c",&c);
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        printf("Vowel");
    } else{
        printf("Consonant");
    }
    return 0;
}