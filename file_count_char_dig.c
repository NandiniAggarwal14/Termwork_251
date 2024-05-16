/* 
NAME                                  : NANDINI AGGARWAL
UNIVERSITY ROLL NO. : 2023893
ROLL NO.                           : 50
SECTION                             : F

13. Write a C program to input a paragraph inside a file “File.txt” and count no. of characters 
    and digits in each line and store the count in “Count.txt” file line by line. Example:
    Contents of File.txt:
    My name is xyz23.
    My college1 name is x3x45x. My phone no is 34567856.
    Contents of count.txt:  15 2
                            23 4
                            16 8


*/

#include<stdio.h>
int main()
{
    FILE *fp1, *fp2;
    int i, cc, cd;
    char ch;
    fp1=fopen("File.txt","w");
    printf("\n\t\t\t\t\t**********INPUT**********\n\n");
    printf("\nInput the contents of file named File:\n");
    while((ch=getchar())!=EOF)
    {
        fputc(ch,fp1);
    }
    fclose(fp1);
    fp1=fopen("File.txt","r");
    fclose(fp1);
    fp1=fopen("File.txt","r");
    fp2=fopen("Count.txt","w");
    while((ch=fgetc(fp1))!=EOF)
    {
        cc=0, cd=0;
        while (ch != '\n' && ch != EOF)
        {
            if(ch>='0' && ch<='9')
            cd++;
            else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
            cc++;
            ch = fgetc(fp1);
        }
        fprintf(fp2,"%d %d\n",cc,cd);
    }
    fclose(fp1);
    fclose(fp2);
    printf("\n\t\t\t\t\t**********OUTPUT**********\n\n");
    printf("\nContents of count.txt are as folows:\n");
    fp2=fopen("Count.txt","r");
    while((fscanf(fp2,"%d %d",&cc,&cd))!=EOF)
    {
        printf("%d %d\n",cc,cd);
    }
    fclose(fp2);
    return 0;
}