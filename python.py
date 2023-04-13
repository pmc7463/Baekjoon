words = []
for i in range(5):
    input_a = input()
    words.append(input_a)

for j in range(15):
    for i in range(5):
        if  j < len(words[i]):
            print(words[i][j], end = '' )

