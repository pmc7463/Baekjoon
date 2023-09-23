S = input()

happy = S.count(":-)")
sad = S.count(":-(")

#print(happy, sad)

if happy == 0 and sad == 0:
    print("none")
else:
    if happy > sad:
        print("happy")
    elif happy < sad:
        print("sad")
    else:
        print("unsure")
