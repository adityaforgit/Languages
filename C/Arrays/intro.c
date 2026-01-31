//Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
#include<stdio.h>
int main()
{
    /*int mynum[] = {25,50,75,100};
    printf("%d\n",mynum[0]); 
    // Changing an element.
    mynum[1] = 1050;
    printf("%d\n",mynum[1]);*/
    // Loop through an array.
    /*int mynum[] = {25,50,75,100};
    int i;
    for(i = 0; i<4; i++){
        printf("%d\n",mynum[i]);
    }*/
  /* int mynum[4];
   mynum[0] = 4;
   mynum[1] = 5;
   mynum[2] = 6;
   mynum[3] = 7;
   mynum[4] = 8;
   printf("%d",mynum[4]);*/
   //Array size or length.
   /*int arr[] = {10,25,50,45,100,78};
   int length = sizeof(arr)/sizeof(arr[0]);//It returns number of elements in an array.
   printf("%d\n",sizeof(arr));//It returns size of type in bytes.
   printf("%d",length);*/
   int arr[] = {25,50,75,100};
   int len = sizeof(arr)/sizeof(arr[0]);
   for(int i = 0; i<len; i++){
    printf("%d\n",arr[i]);
   }
}
    
