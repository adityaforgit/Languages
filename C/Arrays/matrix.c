/*WAP in c to
i) add 2 matrix
ii) multiply 2 matrix
iii) print upper triangular of a matrix*/
//(i)
/*#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter number of rows and columns :");
    scanf("%d %d",&r,&c);
    int mat1[r][c],mat2[r][c],sum[r][c];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
     }
     printf("Enter elements of second matrix :\n");
     for (int i = 0; i < r; i++)
     {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
        
     }
     
     printf("Sum of matrices:\n");
     for (int i = 0; i < r; i++)
     {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d",sum[i][j]);
        }
        printf("\n");
     }
     return 0;
}*/
//(ii)
/*#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    printf("Enter number of rows and columns for first matrix :");
    scanf("%d %d",&r1,&c1);
    printf("Enter number of rows and columns for second matrix :");
    scanf("%d %d",&r2,&c2);
    if(c1!=r2){
        printf("Matrix multiplication is not possible.");
        return 0;
    }
    int mat1[r1][c1],mat2[r2][c2],pro[r1][c2];
    printf("Enter elements of first matrix :\n");
    for(int i = 0; i<r1; i++){
        for (int j = 0; j < c1; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter elements of second matrix :\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            pro[i][j] = 0; 
        }
        
    }
    for (int  i = 0; i < r1; i++)
    {
        for (int  j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                pro[i][j] += mat1[i][k] * mat2[k][j];
            }
            
        }
        
    }
    printf("Product of matrices: \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d",pro[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
//(iii)
#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows and colums of the matrix: ");
    scanf("%d %d",&r,&c);
    if(r!=c){
    printf("Upper triangular matrix is not possible.");
    return 0;
}
    int mat[r][c];
    printf("Enter the elements of matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(i<=j){
                printf("%d",mat[i][j]);
            } else {
                printf("0");
            }
        }
          printf("\n");        
    }
    return 0;
}