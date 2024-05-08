/* 
NAME                                  : NANDINI AGGARWAL
UNIVERSITY ROLL NO. : 2023893
ROLL NO.                           : 50
SECTION                             : F

10. Create a structure to specify data on students given below: Roll number, Name, Department, 
Course, Year of joining Assume that there are not more than 450 students in the college.
(a) Write a function to print names of all students who joined in a particular year
(b) Write a function to print the data of a student whose roll number is given.

*/

#include<stdio.h>
struct student
{
int roll, year;
char name [40], dept [40], course [40] ;
}s[450];
void same_year (struct student *, int, int);
void same_roll (struct student *, int, int);
int main ()
{
    int n,i, year_to_search, roll_to_search;
    printf("\t\t\t\t\t**********INPUT**********\n\n");
    printf("Input the total number of students whose data is to be entered: "); 
    scanf ("%d", &n);
    for(i=0;i<n;i++)
    {
        printf ("\nInput the roll number, name, department, course and year of joining of student %d: ",i+1);
        scanf("%d %[^\n] %[^\n] %[^\n]%d", &s[i].roll, s[i].name, s[i].dept, s[i].course, &s[i].year);
    }
    printf("\nInput the specific year to search for records of students: ");
    scanf ("%d", &year_to_search);
    printf("\nInput the specific roll number: ");
    scanf("%d",&roll_to_search);
    printf("\n\t\t\t\t\t**********OUTPUT**********\n\n");
    same_year(s,n, year_to_search);
    same_roll(s,n, roll_to_search);
    return 0;
}
void same_year(struct student *s, int n, int year_to_search)
{
    int i,flag=0;
    printf("\nThe names of the students whose year of joining matches the specified year are: ");
    for(i=0;i<n;i++)
    {
        if(s[i].year == year_to_search)
        {
            printf("\n%s",s[i].name);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("\nDoes not exist");
    }
}
void same_roll(struct student *s, int n, int roll_to_search)
{
    int i,flag=0;
    printf("\nThe data of the student whose roll number matches the specified roll number is: ");
    for(i=0;i<n;i++)
    {
        if(s[i].roll == roll_to_search)
        {
            printf("\nName:%s\nDepartment:%s\nCourse:%s\nYear of joining:%d",s[i].name, s[i].dept, s[i].course, s[i].year);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("\nDoes not exist");
    }
}