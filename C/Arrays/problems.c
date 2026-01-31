//WAP to calculates the average of different ages.
#include<stdio.h>
int main()
{
 /*   int ages[] = {20,22,18,45,74,14,4,45,21,62};
    float avg,sum = 0;
    int i;
    int len = sizeof(ages)/sizeof(ages[0]);
    for(int i = 0; i<len; i++){
        sum += ages[i];
    }
    avg =  sum/len;
    printf("The average age is: %f",avg);
}*/


//WAP to find the lowest age among different ages.
/*int ages[] = {20,22,1,42,45,78,18,9};
int len = sizeof(ages)/sizeof(ages[0]);
int lowestage = ages[0];
for(int i =0; i<len; i++){
    if(lowestage>ages[i]){
        lowestage = ages[i];
    }
    }
    printf("The lowest age is %d",lowestage);
}*/

//WAP in C to find largest of n numbers using an array
int n;
printf("Enter the nuber of elements =");
scanf("%d",&n);
int arr[n];
printf("Enter %d elements:\n",n);
for(int i = 0; i<n; i++){
    scanf("%d",&arr[i]);
}
int largest = arr[0];
for(int i = 1; i<n; i++){
    if(arr[i]>largest){
            largest = arr[i];
        }
    }
    printf("The largrest number is: %d\n",largest);
}

