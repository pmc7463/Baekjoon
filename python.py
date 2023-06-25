repetition = int(input())

for k in range(1, repetition+1):
    sentence = list(input().split(" "))
    temp = []
    for i in range(len(sentence)):
        element = sentence[i]
        temp.append(element)

    temp = ' '.join(temp[::-1])
    print(f"Case #{k}: {temp}")
