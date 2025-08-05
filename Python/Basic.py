# Factorial using math library
import math

def factorial(n):
    return math.factorial(n)

# Check if a number or string is a palindrome
def is_palindrome(value):
    s = str(value)
    return s == s[::-1]

# Reverse a number
def reverse_number(n):
    return int(str(n)[::-1])

# Reverse a string
def reverse_string(s):
    return s[::-1]

# Check if a number is an Armstrong number
def is_armstrong(num):
    original = num
    digits = len(str(num))
    result = 0
    while num > 0:
        digit = num % 10
        result += digit ** digits
        num //= 10
    return result == original

# Check if a number is prime (efficient method)
def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

# Sum of numbers from 1 to n
def sum_upto(n):
    return n * (n + 1) // 2

# Count the number of digits in a number
def count_digits(n):
    return len(str(abs(n)))

# Check if a number is in a given range of Armstrong numbers
def armstrong_in_range(lower, upper):
    result = []
    for num in range(lower, upper + 1):
        if is_armstrong(num):
            result.append(num)
    return result

# Generate Fibonacci up to n-th term
def fibonacci(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)
