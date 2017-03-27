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


done = False

while not done:
    user_input = raw_input("Enter a Fibonacci number to be calculated (Enter to exit):")

    if user_input == "":
        done = True
    else:
        print(fib(int(user_input)))
