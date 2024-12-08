i = 3 
sum = 2 
while i <= 2000000: 
    f = 1
    j = 2 
    #while j < i : 
    #while j < i or j < int(i**0.5)+1 : 
for j in range(2,int(i**0.5)+1): 
     if i%j==0: 
      f=0 
      break
j = j + 1 
if f == 1 : 
    sum + sum + i 
    i = i + 1 
    print( "Sum of prime number : ", sum) 