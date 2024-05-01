//Reverse array elements from a particular index to last using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,n,*p,index,j,tmp;
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
printf("\nThe array after reversing is:\n");
for(i=0;i<n;i++)
{
printf("%d\n",*(p+i));
}
return 0;
}
