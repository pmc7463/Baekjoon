sentence = input()

vowels = ['a', 'e', 'i', 'o', 'u']

i = 0
while i < len(sentence):
    print(sentence[i], end='')
    if sentence[i] in vowels:
        i += 2
    i += 1


