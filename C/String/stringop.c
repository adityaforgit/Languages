/*Perform the following string operations without using built in functions
i) String reverse
ii) String concatenation
iii) String compare*/

/*#include<stdio.h>
void stringrev(char str[]) {
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    for (int i = 0; i < len/2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i -1];
        str[len - i - 1] = temp;
    }
}
int main() {
    char str[100];
    printf("Enter a string :");
    scanf("%s",str);
    stringrev(str);
    printf("Reversed string: %s\n", str);
    return 0; 
}*/

//(ii)

/*#include<stdio.h>
void stringcon(char str1[],char str2[]) {
    int i = 0, j = 0;
    while (str1[i] != '\0')
    {
        i++;
    }
      while (str2[j] != '\0')
      {
         str1[i] = str2[j];
         i++;
         j++;
      }
      str1[i] = '\0';
}
int main()
{
    char str1[100] , str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    stringcon(str1,str2);
    printf("Concatenated string : %s\n",str1);
    return 0;
}*/

//(iii)

#include<stdio.h>
int stringcom(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return (str1[i] - str2[i]);
        }
        i++;
    }
    return (str1[i] - str2[i]);
}
int main()
{
    char str1[100],str2[100];
    printf("Enter first string: ");
    scanf("%s",str1);
    printf("Enter second string: ");
    scanf("%s",str2);
    int result = stringcom(str1,str2);
    if(result == 0){
        printf("Strings are equal");
    } else if(result>0){
        printf("First string is greater");
    } else{
        printf("Second string is greater.");
    }
    return 0;
}