#wap to compute LCM taking input from the user 
# print("Enter two number") 
# n1 = int(input("Enter first number: "))
# n2 = int(input("Enter second number: "))

# i =2 
# res =1 
# while 1: 
#     if n1%i==0 or n2 % i==0: 
#         res = res*i
#     if n2 %i ==0:
#         n2 = n2/i
        
#     else: 
#         i = i+1
#         if n1 == 1and n2 == 1: 
#             break
#         print("LCM = ",res)

num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))

# def compute_gcd(a, b):
#     while b != 0:
#         a, b = b, a % b
#     return a

# gcd = compute_gcd(num1, num2)
# lcm = (num1 * num2) // gcd

# print(f"The LCM of {num1} and {num2} is {lcm}")

def compute_gcd(a,b):
    while b !=0:
        a,b = b,a % b
        return a 
    
    gcd = compute_gcd(num1,num2)
    lcm =(num1*num2)//gcd
    
    print(f"The LCM of {num1} and {num2} is {lcm}")
        