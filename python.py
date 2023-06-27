repetition = int(input())

height = []

for i in range(repetition):
    temp = 0
    height.append(temp)

height = list(map(int,input().split()))

temp = 0
height_max = 0

climb = []
for i in range(repetition-1):
    if height[i] < height[i + 1]:
        temp += height[i + 1] - height[i]

    else:
        climb.append(temp)
        temp = 0

climb.append(temp)

print(max(climb))