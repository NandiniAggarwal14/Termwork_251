/* 
NAME                                  : NANDINI AGGARWAL
UNIVERSITY ROLL NO. : 2023893
ROLL NO.                           : 50
SECTION                             : F

8. Write a Program to input an array and reverse the array elements from particular index to the 
last using dynamic memory allocation.

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,*p,index,j,tmp;
    printf("\t\t\t\t\t**********INPUT**********\n\n");
    printf("\nInput the number of array elements: ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    printf("\nInput the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    printf("\nInput the particular index from where the array is to be reversed: \n");
    scanf("%d",&index);
    for(i=index, j=n-1; i<j; i++, j--)
    {
        tmp=*(p+j);
        *(p+j)=*(p+i);
        *(p+i)=tmp;
    }        
    printf("\t\t\t\t\t**********OUTPUT**********\n\n");
    printf("\nThe array after reversing is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(p+i));
    }
    return 0;
}
