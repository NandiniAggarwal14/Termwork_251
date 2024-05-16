/* 
NAME                                  : NANDINI AGGARWAL
UNIVERSITY ROLL NO. : 2023893
ROLL NO.                           : 50
SECTION                             : F

12. Write a program to read 20 integers in a file. Separate them into two different files prime.txt 
and nonprime.txt such that all prime numbers are copied in prime.txt and remaining numbers in 
nonprime.txt.


*/

#include<stdio.h>
int prime(int);
int main()
{
    FILE *fp1, *fp2, *fp3;
    int i,res,n,cp=0,np=0;
    fp1=fopen("Data.txt","r");
    printf("\nThe contents of the file named Data are as follows:\n");
    for(i=1;i<=20;i++)
    {
        n=getw(fp1);
        printf("%d\n",n);
    }
    rewind(fp1);
    fp2=fopen("Prime.txt","w");
    fp3=fopen("NonPrime.txt","w");
    for(i=1;i<=20;i++)
    {
        n=getw(fp1);
        res=prime(n);
        if(res==1)
        {
            putw(n,fp2);
            cp++;
        }
        else
        {
            putw(n,fp3);
            np++;
        }
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    printf("\n\t\t\t\t\t**********OUTPUT**********\n\n");
    fp2=fopen("Prime.txt","r");
    printf("\nThe contents of the file named Prime are as follows:\n");
    for(i=1;i<=cp;i++)
    {
        n=getw(fp2);
        printf("%d\n",n);
    }
    fclose(fp2);
    fp3=fopen("NonPrime.txt","r");
    printf("\nThe contents of the file named NonPrime are as follows:\n");
    for(i=1;i<=np;i++)
    {
        n=getw(fp3);
        printf("%d\n",n);
    }
    fclose(fp3);
    return 0;
}
int prime(int n)
{
    int i;
    if(n<=1)
    {
        return 0;
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}