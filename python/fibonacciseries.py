#wap to find sum of prime no considering into fibonacci series 
def is_prime(n):
    if n <= 1:
        return False
    if n <= 3:
        return True
    # Eliminate multiples of 2 and 3
    if n % 2 == 0 or n % 3 == 0:
        return False
    # Check for factors up to sqrt(n)
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True

def fibonacci_sequence(limit):
    fib_seq = [0, 1]
    next_num = fib_seq[-1] + fib_seq[-2]
    while next_num <= limit:
        fib_seq.append(next_num)
        next_num = fib_seq[-1] + fib_seq[-2]
    return fib_seq

# Taking input from the user
upper_limit = int(input("Enter the upper limit for the Fibonacci series: "))

fib_numbers = fibonacci_sequence(upper_limit)
prime_fibs = [num for num in fib_numbers if is_prime(num)]
sum_of_prime_fibs = sum(prime_fibs)

print(f"\nFibonacci series up to {upper_limit}:\n{fib_numbers}")
print(f"\nPrime numbers in the Fibonacci series:\n{prime_fibs}")
print(f"\nSum of prime Fibonacci numbers: {sum_of_prime_fibs}")
