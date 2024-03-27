def is_pangram(sentence):

    sentence_lower = sentence.lower()

    unique_letters = set()
    for char in sentence_lower:
        if char.isalpha():
            unique_letters.add(char)

    return len(unique_letters) == 26
    