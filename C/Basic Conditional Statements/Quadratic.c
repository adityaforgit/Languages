//WAP in C to find the roots of a quadratic equations in the format ax^2+bx+c=0
#include<stdio.h>
#include<math.h>
int main()
{
  /*float d,a,b,c,root1,root2;
    printf("Enter the value of a,b,c =");
    scanf("%f%f%f",&a,&b,&c);
    d = b*b - 4*a*c;
    if(d>0){ 
        root1 = (-b + sqrt(d)/2*a);
        root2 = (-b -sqrt(d)/2*a);
        printf("Root1 = %f\nRoot2 = %f", root1,root2);
    } else if (d==0){
        root1 = root2 = -b/2*a;
        printf("Root1 = %f\nRoot2 = %f", root1,root2);
    }
        else {
            printf("Roots are imaginary");
        }*/
    int arr[] = {34, 56, 23, 89, 12, 67};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target, i;

    // Get target value from user
    printf("Enter the value to search: ");
    scanf("%d", &target);

    // Linear search logic
    int found = -1; // Default value if not found
    for (i = 0; i < size; i++) {
        if (arr[i] == target) {
            found = i; // Found the element
            break;
        }
    }

    // Display result
    if (found != -1) {
        printf("Element %d found at index %d.\n", target, found);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
       return 0;
    }
