/*#include<stdio.h>
int main()
{
int a;
display(); //Function
return 0;
}
void display(){ //Functioin defination
    printf("This is a function.");
}*/
/* WAP with three functions 
(i) Good morning function which prints "Good Morning".
(ii) Good afternoon function which prints "Good Afternoon".
(iii) Good night function which prints "Good night" */
/*#include<stdio.h>
void display();
void goodmorning();
void goodafternoon();
void goodnight();
int main() // Execution of C program starts from main()
{
    display();
    goodmorning();
    goodafternoon();
    goodnight();
    return 0;
}
void display()
{
    printf("This is a function\n");
}
void goodmorning()
{
printf("Good Morning\n");
}
void goodafternoon(){
    printf("Good Afternoon\n");
}
void goodnight(){
    printf("Good Night\n");
}*/
/*There are two types of functions in C 
  (i) Library Functions - Commonly required functions grouped together in a library file on a disk.
  (ii) User defined functions - These are the functions declared and defined by the user.*/
 /* int sum(int a , int b) { ----> a nd b are parameters
    int c;
    c = a+b;
    return c;
  }*/
 #include<stdio.h>
 int main()
 {
    int factorial(int x){
        int f;
        if(x == 0 || x == 1)
        return 1;
        else
        f =  x * factorial(x-1);
        return f;
    }
   
 }