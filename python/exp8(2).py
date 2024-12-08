def find_numbers():
    result = []
    for num in range(1000, 10000):
        if num % 7 == 0 and num % 5 != 0:
            result.append(num)
    return result

numbers = find_numbers()
print("Numbers between 1000 and 10000 that are divisible by 7 but not multiples of 5:")
print(numbers)
