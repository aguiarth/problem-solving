def rotate(word):
    return word[1:] + word[0]

def pig_latin(word):
    if word.startswith(('xr', 'yt')):
        return word + 'ay'

    if word[0] == 'y' and word[1] in 'aeiou':
        return rotate(word) + 'ay'
        
    while word[0] not in 'aeiouy':
        word = rotate(word)

    if word[-1] == 'q' and word[0] == 'u':
        word = rotate(word)

    return word + 'ay'

def translate(text):
    return ' '.join(pig_latin(word) for word in text.split())