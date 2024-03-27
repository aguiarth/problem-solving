def rotate(text, key):
    """Caesar Cipher.
	Rotates (latin, unaccented) letters in s around the alphabet by amount.
	Doesn't change other things.

	s: the string to rotate.
	amount: the amount to rotate by.

	returns: the rotated string.
	"""

    chars = "abcdefghijklmnopqrstuvwxyz"
    
    #create +key 'to' string for translation table
    newchars = chars[key:] + chars[:key]
    swap = str.maketrans((chars + chars.upper()), (newchars + newchars.upper()))
    
    return text.translate(swap)