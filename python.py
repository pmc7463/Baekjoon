sentence = input()
answer = []

for i in range(len(sentence)):
    answer.append(sentence[i:])

answer.sort()

for i in answer:
    print(i)