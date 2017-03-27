# TODO: get input from the user on which fib number to print


calculatedvals = [0, 1]


def fib(fibnum):
    if fibnum < 0:
        return "Invalid Fibonacci entry"

    return fibrecurse(fibnum)


def fibrecurse(fibnum):
    if fibnum < len(calculatedvals):
        return calculatedvals[fibnum]
    else:
        calculatedvals.append(fibrecurse(fibnum - 1) + fibrecurse(fibnum - 2))
        return calculatedvals[fibnum]


print(fib(300))
