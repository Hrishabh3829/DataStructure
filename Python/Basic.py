#Factorial using math library
import math

def factorial(n):
    return math.factorial(n)

# Check if a number or string is a palindrome
def is_palindrome(value):
    """Returns True if value is a palindrome"""
    s = str(value)
    return s == s[::-1]

# Reverse a number
def reverse_number(n):
    return int(str(n)[::-1])

# Reverse a string
def reverse_string(s):
    """Returns the reverse of a string"""
    return s[::-1]

# Check if a number is an Armstrong number
def is_armstrong(n):
    """Returns True if n is an Armstrong number"""
    digits = len(str(n))
    return sum(int(digit) ** digits for digit in str(n)) == n

# Check if a number is prime (efficient method)
def is_prime(n):
    """Returns True if n is a prime number"""
    if n <= 1:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

# Sum of numbers from 1 to n
def sum_upto(n):
    """Returns the sum of all integers from 1 to n"""
    return n * (n + 1) // 2

# Count the number of digits in a number
def count_digits(n):
    """Returns the number of digits in a given number"""
    return len(str(abs(n)))

# Check if a number is in a given range of Armstrong numbers
def armstrong_in_range(lower, upper):
    """Returns a list of Armstrong numbers between lower and upper (inclusive)"""
    result = []
    for num in range(lower, upper + 1):
        if is_armstrong(num):
            result.append(num)
    return result

# Generate Fibonacci up to n-th term
def fibonacci(n):
    """Returns the n-th Fibonacci number (0-indexed)"""
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)
