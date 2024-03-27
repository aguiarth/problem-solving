# Calculate the number of steps required to reach 1 using the Collatz conjecture.

def steps(number):
    if number <= 0:
        raise ValueError("Only positive integers are allowed")
    else:
        steps = 0
        while number != 1:
            if number % 2 == 0:
                number = number / 2
                steps += 1
            else:
                number = (number * 3) + 1
                steps += 1

    return steps