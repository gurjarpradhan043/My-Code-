#wap to find area of circle with given radius using functions 
import math

def calculate_area_of_circle(radius):
    # Area of circle formula: A = πr²
    return math.pi * (radius ** 2)

# Taking input from the user
radius = float(input("Enter the radius of the circle: "))

# Calculating the area using the function
area = calculate_area_of_circle(radius)

# Displaying the result
print(f"The area of the circle with radius {radius} is {area}.")
