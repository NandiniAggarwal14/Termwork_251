/* 
NAME               : NANDINI AGGARWAL
UNIVERSITY ROLL NO.: 2023893
ROLL NO.           : 50
SECTION            : F

3. Write a program in C to find the sum of the lower triangular elements of a matrix.

*/

#include<stdio.h>
int main()
{
    int a[20][20], i, j, m, n, sum=0;
    printf("\nInput number of rows and columns of the 2D Array: ");
    scanf("%d%d",&m,&n);
    if(m!=n)
    printf("\nNot a square matrix thus a lower triangular matrix is not possible");
    else
    {
    printf("\nInput array elements: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe given array is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nThe elements being summed of the lower triangular matrix are: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>j)
            printf("%d ",a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>j)
            sum=sum+a[i][j];
        }
    }
    printf("\nThe sum of the lower triangular matrix elements are: %d",sum);
    }
    return 0;
}