#area of circle with given radius using functions method
def findArea(r): 
    PI = 3.142
    return PI*(r*r);
print("Area is %6f"%findArea(4))

#method 2 
import math 
def find_area(r):
    PI = 3.14
    return PI * pow(r,2)
print("Area is: %6f"%find_area(4))

