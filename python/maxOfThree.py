#define a function max of three that takes three number as argument and return largest of them 
def max_of_three(a, b, c):
    return max(a, b, c)

# Example usage:
num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))
num3 = int(input("Enter third number: "))

largest = max_of_three(num1, num2, num3)
print("The largest number is:", largest)
