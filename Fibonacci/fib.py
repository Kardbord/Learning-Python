#!/usr/bin/python

def isInt(n):
    """Returns true if @n is an int, false if not"""
    return type(n) is int

def isInt_gteZero(n):
    """Returns true if @n is an int and greater than or equal to 0, false if not"""
    return isInt(n) and n >= 0


def recursiveFib(n):
    """Returns the nth fibonacci number"""
    if not isInt_gteZero(n):
        return float('nan');
    if n == 0:
        return 0
    if n == 1:
        return 1
    return recursiveFib(n - 1) + recursiveFib(n - 2)


def dynamicFib(n):
    """Returns the nth fibonacci number"""
    if not isInt_gteZero(n):
        return float('nan');
    if n == 0:
        return 0
    if n == 1:
        return 1
    fib = [None] * (n + 1)
    fib[0] = 0
    fib[1] = 1
    for i in range(2, n + 1):
        fib[i] = fib[i - 1] + fib[i - 2]
    return fib[n]

if __name__ == "__main__":
    print("recursiveFib(6):")
    print(recursiveFib(6))
    print("dynamicFib(6):")
    print(dynamicFib(6))

