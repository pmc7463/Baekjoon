from functools import reduce

def multiply(arr):
    return reduce(lambda x, y: x * y, arr)

num = int(input())

arr = []

flag = 1

while num != 0:
    temp = num % 10
    arr.append(temp)
    num = int(num / 10)

length = len(arr)

for i in range(length):
    for j in range(1, length):
        if multiply(arr[i:j]) == multiply(arr[i+1:]):
            flag = 1

    if flag == 1:
        print("Yes")
        break
    else:
        print("No")
        break