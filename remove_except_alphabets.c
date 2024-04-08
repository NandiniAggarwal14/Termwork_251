/* 
NAME               : NANDINI AGGARWAL
UNIVERSITY ROLL NO.: 2023893
ROLL NO.           : 50
SECTION            : F

7. Write a program to remove characters from a string except alphabets.

*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[40], substr[40];
    int l,i,j=0;
    printf("\nInput a string: ");
    fgets(str,40,stdin);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            substr[j++]=str[i];
        }
    }
    substr[j]='\0';
    printf("\nThe new string is: ");
    puts(substr);
}