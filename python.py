domino = int(input())
sum = 0

for i in range(domino+1):
    for j in range(i, domino+1):
        sum += i + j

print(sum)