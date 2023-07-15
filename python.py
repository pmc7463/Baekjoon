import sys
input = sys.stdin.readline()

num = int(input)

arr = []

for i in range(1, num + 1):
    arr.append(i)

temp = []

while len(arr) != 0:
    temp.append(arr.pop(0))

    if len(arr) != 0:
        arr.append(arr.pop(0))

for i in temp:
    print(i, end = " ")
