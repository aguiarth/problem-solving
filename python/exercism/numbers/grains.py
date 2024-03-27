# Calculate the number of grains of wheat on a chessboard given that the number on each square doubles.

def square(number):
    if 1 <= number <= 64:
        grains = 2 ** (number - 1)
    else:
        raise ValueError("square must be between 1 and 64")
    return grains


def total():
    return 2 ** 64 - 1