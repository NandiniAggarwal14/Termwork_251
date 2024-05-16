/* 
NAME                                  : NANDINI AGGARWAL
UNIVERSITY ROLL NO. : 2023893
ROLL NO.                           : 50
SECTION                             : F

11. Write a C program to read a text file named as “Data.txt”, Create an another file named as 
“Del.txt” deleting the words “a”, “the”, “an” from the file “Data.txt” and replacing each one of 
them with a blank space in “Del.txt”.

*/

#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp1, *fp2;
    char str[50], ch;
    int n,i=0;
    fp1=fopen("Data.txt","r");
    printf("\nThe contents of the file named Data is as follows:\n");
    while((ch=fgetc(fp1))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp1);
    fp1=fopen("Data.txt","r");
    fp2=fopen("Del.txt","w");
    while((ch=fgetc(fp1))!=EOF)
    {
        while(ch != ' ' && ch != '\n')
        {
            str[i++]=ch;
            ch = fgetc(fp1);
        }
        str[i]='\0';
        if(strcmp(str,"a") !=0 && strcmp(str,"the")!=0 && strcmp(str,"an")!=0)
        {
            fputs(str,fp2);
            if(ch != EOF)
            {
                fputc(ch,fp2);
            }
        }
        else
        {
        fputc(' ',fp2);
        }
        i=0;
    }
    fclose(fp1);
    fclose(fp2);
    fp2=fopen("Del.txt","r");
    printf("\n\t\t\t\t\t**********OUTPUT**********\n\n");
    printf("\nThe contents of the file named Del is as follows:\n");
    while((ch=fgetc(fp2))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp2);
    return 0;
}