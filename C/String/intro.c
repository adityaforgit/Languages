#include<string.h>
#include<stdio.h>
int main()
{
  /*  char str[] = "My name is Aditya";
    str[11] = 'T';
    str[12] = 'r';
    str[13] = 'i';
    str[14] = 's';
    str[15] = 'h';
    str[16] = 'a';
    printf("%s",str);*/
    //Loop through an string.
    char str[] = "Aditya";
    for(int i = 0; i<6; i++){
        printf("%c\n",str[i]);
    }
   /*char arr[] = {'H','e','l','l','o',' ','W','o','r','l','d','\0'};
   printf("%s",arr);*/
  /* char message[] = "Good to see you,";
   char fname[] = "Aditya";
   printf("%s %s",message,fname);*/
   /*char str1[] = "NBJFDHUEBGDNOIUD";
   char str2[] = "ABCDEFGJI";
   printf("%d\n",strlen(str1));// To get the length of a String.
   printf("%d\n",strcat(str1,str2));// To conecate two strings.
   printf("%d\n",strcpy(str1,str2));*/
   /*int myAge = 45;
   printf("%p",&myAge);*///Returns actual memory address of myAge.
}