#wap to find sum of prime numbers
def is_prime(n):
    if n <= 1:
        return False
    if n <= 3:
        return True
    # Eliminate multiples of 2 and 3
    if n % 2 == 0 or n % 3 == 0:
        return False
    # Check for factors from 5 to sqrt(n)
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True

# Taking input from the user
upper_limit = int(input("Enter the upper limit: "))

sum_of_primes = 0
prime_numbers = []

for num in range(2, upper_limit + 1):
    if is_prime(num):
        sum_of_primes += num
        prime_numbers.append(num)

print(f"\nThe prime numbers up to {upper_limit} are:\n{prime_numbers}")
print(f"\nThe sum of these prime numbers is: {sum_of_primes}")
