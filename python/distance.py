#wap to find complete distance between two points taken import math
import math

x1 = int(input("Enter the value for x1 point"))
y1 = int(input("Enter the value for y1 point"))
x2 = int(input("Enter the value for x2 point"))
y2 = int(input("Enter the value for y2 point"))

distance = math.sqrt((x2-x1)**2+(y2-y1)**2)
print("the distance between the two points is : ",distance)