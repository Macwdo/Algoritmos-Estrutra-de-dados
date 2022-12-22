def factorial(number):
    print(f"Factorial called with number = {number}")
    if number > 1:
        return number * factorial(number-1)
    return 1

print(factorial(3))