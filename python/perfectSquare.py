#wap to check whether a given number is a perfect square using sqrt function
import math

# Taking input from the user
number = float(input("Enter a number to check if it is a perfect square: "))

# Calculating the square root
sqrt_number = math.sqrt(number)

# Checking if the square root is an integer
if sqrt_number.is_integer():
    print(f"{number} is a perfect square.")
else:
    print(f"{number} is not a perfect square.")

