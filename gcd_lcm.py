""""
NAME                                  : NANDINI AGGARWAL
UNIVERSITY ROLL NO. : 2023893
ROLL NO.                           : 50
SECTION                             : F

17. Write a Python program that computes the greatest common divisor (GCD) and least 
common multiple (LCM) of two positive integers

"""


print("\n\t\t\t\t\t**********INPUT**********\n\n")
a=int(input("Enter first number: "))
b=int(input("Enter second number: "))
c=a
d=b
print("\n\t\t\t\t\t**********OUTPUT**********\n\n")
while(a%b!=0):
    rem=a%b
    a=b
    b=rem
print("The GCD is ",b," ")
if(c>d):
    lg=c
    sm=d
else:
    lg=d
    sm=c
L=lg
while(L%sm!=0):
    L=L+lg
print("The LCM is ",L," ")
