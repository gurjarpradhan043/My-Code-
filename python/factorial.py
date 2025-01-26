# def factorial(n):
#     if n==0:
#         return 1
#     else:
#         return n*factorial(n-1)
    
# result = factorial(10)
# print(result)

def factorial(n):
     if n == 1:
         return 1

     return n* factorial(n - 1)


print(factorial(5))