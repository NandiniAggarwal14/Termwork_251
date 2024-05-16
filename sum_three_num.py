""""
NAME                                  : NANDINI AGGARWAL
UNIVERSITY ROLL NO. : 2023893
ROLL NO.                           : 50
SECTION                             : F

16. Write a Python program to calculate the sum of three given numbers. If the values are equal, 
return three times their sum.

"""

print("\n\t\t\t\t\t**********INPUT**********\n\n")
a=int(input("Enter first number: "))
b=int(input("Enter second number: "))
c=int(input("Enter third number: "))
print("\n\t\t\t\t\t**********OUTPUT**********\n\n")
sum = a+b+c
if(a==b and b==c):
    sum=sum*3
    print(sum)
else:
    print(sum)
