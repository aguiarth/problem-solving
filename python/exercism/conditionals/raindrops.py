def convert(number):
    raindrops = ''

    conditions = [(3, 'Pling'), (5, 'Plang'), (7, 'Plong')]

    for factor, sound in conditions:
        if number % factor == 0:
            raindrops += sound

    return raindrops if raindrops else str(number)