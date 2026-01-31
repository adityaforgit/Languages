#include<stdio.h>
int main()
{
    /*int matrix[2][3] = { {1,4,2},{3,6,8}};
    printf("%d",matrix[1][1]);//Index starts with 0.
}*/
//Loop through 2D array.
/*int matrix[2][3] = { {1,4,2}, {3,6,8} };
for(int i = 0; i<2; i++){
    for(int j = 0; j<3; j++){
        printf("%d\n",matrix[i][j]);
    }
  }
}*/
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nNumber\tAddress\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%p\n", arr[i], (void*)&arr[i]);
    }

    return 0;
}

