"""Functions used in preparing Guido's gorgeous lasagna.

Learn about Guido, the creator of the Python language:
https://en.wikipedia.org/wiki/Guido_van_Rossum

This is a module docstring, used to describe the functionality
of a module and its functions and/or classes.
"""
EXPECTED_BAKE_TIME = 40
def bake_time_remaining(elapsed_baked_time):
    """Calculate the bake time remaining.

    :param elapsed_baked_time: int - baking time already elapsed.
    :return: int - remaining bake time (in minutes) derived from 'EXPECTED_BAKE_TIME'.

    Function that takes the actual minutes the lasagna has been in the oven as
    an argument and returns how many minutes the lasagna still needs to bake
    based on the `EXPECTED_BAKE_TIME`.
    """
    remaining_bake_time = EXPECTED_BAKE_TIME - elapsed_baked_time
    return remaining_bake_time
def preparation_time_in_minutes(number_of_layers):
    """Calculates extra preparation time for each lasagna layer.

    :param number_of_layers: int - number of layers of the lasagna.
    :return: int - extra time for each layer.

    Function that takes the number of layers of the lasagna as
    an argument and returns how many more minutes the recipe will have.
    """
    return 2 * number_of_layers
def elapsed_time_in_minutes(number_of_layers, elapsed_baked_time):
    """Calculate the elapsed time in minutes.

    :param number_of_layers: int - number of layers of the lasagna.
    :param elapsed_bake_time: int - baking time already elapsed.
    :return: extra preparation time for each layer + elapsed bake time.
    
    Function that takes the returns minutes spent on the recipe.
    """
    extra_time_layers = preparation_time_in_minutes(number_of_layers)
    return elapsed_baked_time + extra_time_layers