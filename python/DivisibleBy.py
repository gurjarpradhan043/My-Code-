#wap which make use of function to display all such number which are divisible by 7 but are not a multiple of 5 between 1000 to 10000 

def find_numbers():
    result = []
    for number in range(1000, 10001):
        if number % 7 == 0 and number % 5 != 0:
            result.append(number)
    return result

# Display the numbers
numbers = find_numbers()
print("Numbers divisible by 7 but not multiples of 5 between 1000 and 10000:")
print(numbers)
