/* 
NAME                                  : NANDINI AGGARWAL
UNIVERSITY ROLL NO. : 2023893
ROLL NO.                           : 50
SECTION                             : F

9. Design a structure named "Car" to store details like car ID, model, and rental rate per day. 
Write a C program to input data for n cars, calculate the total rental cost for a specified number of 
days, and display the results.

*/

#include<stdio.h>
struct car
{
char id[20];
char model[20];
int rent;
}c[20];
int main()
{
    int n,i,days,total_rent;
    printf("\t\t\t\t\t**********INPUT**********\n\n");
    printf("\nInput the number of entries: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nInput the car ID and the model : ");
        scanf(" %[^\n] %[^\n]", c[i].id,c[i].model);
        printf("\nInput rent per day: ");
        scanf("%d",&c[i].rent);
    }
    printf("\nSpecify the number of days: ");
    scanf("%d",&days);
    printf("\t\t\t\t\t**********OUTPUT**********\n\n");
    for(i=0;i<n;i++)
    {
        printf("\nThe total rental cost of the car of model %s and ID %s for %d days is : ",c[i].model,c[i].id,days);
        total_rent=c[i].rent*days;
        printf("%d",total_rent);
    }
    return 0;
}