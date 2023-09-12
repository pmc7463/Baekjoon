test = int(input())

temp = 0

for _ in range(test):
    arr = list(map(int, input().split()))
    temp = sum(arr)

    print(temp)