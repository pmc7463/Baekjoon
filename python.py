repetition = int(input())

for _ in range(repetition):

    enter = list(input().rstrip())

    #print(enter)

    letter = []
    symbol = []
    temp = []

    for I in enter:
        if I == "<":
            if letter:
                symbol.append(letter.pop())
                #print(letter)
                #print(symbol)
        
        elif I == ">":
            if symbol:
                letter.append(symbol.pop())

        elif I == "-":
            if letter:
                letter.pop()

        else:
            letter.append(I)
    #print(letter)

    letter.extend(reversed(symbol))

    #print(letter)

    print("".join(letter))
