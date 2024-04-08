/* 
NAME               : NANDINI AGGARWAL
UNIVERSITY ROLL NO.: 2023893
ROLL NO.           : 50
SECTION            : F

6. Write a user define function to find the highest frequency character in a string.

*/

#include<stdio.h>
#include<string.h>
char max_frequency(char [], int );
int main()
{
    char str[40], res;
    int l;
    printf("\nInput the string: ");
    fgets(str,40,stdin);
    l=strlen(str);
    res=max_frequency(str,l);
    printf("\nHighest frequency characater appearing in the string is: %c",res);
    return 0;
}
char max_frequency(char str[], int l)
{
    int i,c,j,max=0;
    char max_char;
    for(i='a';i<='z';i++)
    {
        c=0;
        j=0;
        while(j<=l)
        {
            if(str[j]==i || str[j]==i-32)
            {
                c++;
            }
            j++;
        }
        if(max<c)
        {
        max=c;
        max_char=i;
        }
    }
    return max_char;
}