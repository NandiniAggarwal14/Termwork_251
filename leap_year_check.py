""""
NAME                                  : NANDINI AGGARWAL
UNIVERSITY ROLL NO. : 2023893
ROLL NO.                           : 50
SECTION                             : F

14. Write a Python program to check whether the input year is leap year or not

"""

print("\n\t\t\t\t\t**********INPUT**********\n\n")
n=int(input("Enter the year to check:\n"))
print("\n\t\t\t\t\t**********OUTPUT**********\n\n")
if(n%400==0):
    print("Leap Year")
elif( n%4==0 and n%100 !=0):
    print("Leap Year")
else:
    print("Not Leap Year")