repetition = int(input())

for _ in range(repetition):
    num = int(input())

    arr = [0] * num

    arr = list(map(int, input().split()))

    #print(arr)

    print(min(arr), max(arr))