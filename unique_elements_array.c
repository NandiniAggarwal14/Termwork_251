/* 
NAME               : NANDINI AGGARWAL
UNIVERSITY ROLL NO.: 2023893
ROLL NO.           : 50
SECTION            : F

1. Write a user define function in C to print all unique elements in an array.

*/

#include<stdio.h>
void unique(int [], int);
int main()
{
    int a[100], i, n;
    printf("\nInput the number of elements to be stored in the array: ");
    scanf("%d",&n);
    printf("\nInput %d elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        printf("\nElement-%d: ",i);
        scanf("%d",&a[i]);
    }
    unique(a,n);
    return 0;
}
void unique(int a[], int n)
{
    int i, j, flag;
    printf("\nThe unique elements found in the array are: ");
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(i!=j && a[i]==a[j])
            {
                flag=1; 
                break;
            }
        }
        if(flag==0)
        printf("%d ",a[i]);
    }
}