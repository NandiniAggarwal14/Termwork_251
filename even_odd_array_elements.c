/* 
NAME               : NANDINI AGGARWAL
UNIVERSITY ROLL NO.: 2023893
ROLL NO.           : 50
SECTION            : F

2. Write a program in C to separate odd and even integers into separate arrays.

*/

#include<stdio.h>
int main()
{
    int a[40], even[20], odd[20], i, k=0, l=0, n;
    printf("\nInput number of elements to be stored in the array: ");
    scanf("%d",&n);
    printf("\nInput %d elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        printf("\nElement-%d: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even[k]=a[i];
            k++;
        }
        else
        {
            odd[l]=a[i];
            l++;
        }
    }
    printf("\nThe even elements are: ");
    for(i=0;i<k;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\nThe odd elements are: ");
    for(i=0;i<l;i++)
    {
        printf("%d ",odd[i]);
    }
    return 0;
}