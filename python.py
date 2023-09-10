n = int(input())

word = []

for _ in range(n):
    word.append(input())

#print(word)

for i in range(n):
    for j in range(i, n):
        if len(word[i]) == len(word[j]) and word[i][::-1] == word[j]:
            print(len(word[i]), word[i][int(len(word[i])/2)])
