# print("Enter two number ");
# n1 = int(input("Enter first number : "));
# n2 = int(input("Enter second number : "));
# i = 2
# res = 1

# while 1 : 
#     if n1%i == 0 or n2%i== 0 : 
#         res = res * i 
        
#     if n2%i== 0 : 
#         n2 = n2/ i 
        
#     else : 
#         i = i + 1 
#         if n1 == 1 and n2 == 1: 
#             break 
#         print("LCM" ,res) 

n1 = int(input("Enter first Number\n"))
n2 = int(input("Enter second Number\n")) 

maxNum = max(n1,n2)  

while(True): 
    if(maxNum%n1==0 and maxNum%n2==0) : 
        break
    maxNum = maxNum + 1 
    
    print(f"The LCM of {n1} and {n2} is {maxNum}") 