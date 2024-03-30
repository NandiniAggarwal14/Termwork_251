/* 
NAME               : NANDINI AGGARWAL
UNIVERSITY ROLL NO.: 2023893
ROLL NO.           : 50
SECTION            : F

4. Write a program in C to find the max element of each row of a matrix.

*/

#include<stdio.h>
int main()
{
    int a[20][20], i, j, m, n, max;
    printf("\nInput number of rows and columns of the 2D Array: ");
    scanf("%d%d",&m,&n);
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
    printf("\nThe maximum element of each row is: ");
    for(i=0;i<m;i++)
    {
        max=a[i][0];
        for(j=0;j<n;j++)
        {
            if(max<a[i][j])
            max=a[i][j];
        }
        printf("%d ",max);
    }
    return 0;
}
