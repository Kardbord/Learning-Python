ans = 1

while ans <= 100:
    if (ans % 3 == 0) and (ans % 5 == 0):
        print("FizzBuzz")

    elif ans % 3 == 0:
        print("Fizz")

    elif ans % 5 == 0:
        print("Buzz")

    else:
        print(ans)

    ans = ans + 1

print("Done")
