def is_isogram(string):
    """Returns True if <string> is isogram."""
    
    word = [i for i in string.lower() if i.isalpha()]
    return len(set(word)) == len(word)