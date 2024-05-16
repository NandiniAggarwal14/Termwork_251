""""
NAME                                  : NANDINI AGGARWAL
UNIVERSITY ROLL NO. : 2023893
ROLL NO.                           : 50
SECTION                             : F

15. Write a Python program to accept a coordinate point in an XY coordinate system and 
determine in which quadrant the coordinate point lies.
Test Data : 7 9
Expected Output :
The coordinate point (7,9) lies in the First quadrant.


"""
print("\n\t\t\t\t\t**********INPUT**********\n\n")
x=int(input("Input the value of x coordinate: "))
y=int(input("Input the value of y coordinate: "))
print("\n\t\t\t\t\t**********OUTPUT**********\n\n")
if(x>0 and y>0 ):
    print("The coordinate point(",x,",",y,") lies in the First quadrant")
elif(x<0 and y>0):
    print("The coordinate point(",x,",",y,") lies in the Second quadrant")
elif(x<0 and y<0):
    print("The coordinate point(",x,",",y,") lies in the Third quadrant")
elif(x>0 and y<0):
    print("The coordinate point(",x,",",y,") lies in the Fourth quadrant")
else:
    print("The coordinate point(",x,",",y,") is the point of origin")