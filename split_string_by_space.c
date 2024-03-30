/* 
NAME               : NANDINI AGGARWAL
UNIVERSITY ROLL NO.: 2023893
ROLL NO.           : 50
SECTION            : F

5. Write a program in C to split string by space into words.

*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    int i=0,l;
    printf("\nInput the string: ");
    fgets(str,40,stdin);
    l=strlen(str);
    while(str[i]!='\0')
    {
        if(str[i]==' ' || str[i]=='\n')
        printf("\n");
        else
        printf("%c",str[i]);
        i++;
    }
    return 0;
}