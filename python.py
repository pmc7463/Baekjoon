import sys

for _ in range(3):
    repetiton = 0
    sum = 0
    repetiton = int(sys.stdin.readline())
    for i in range(repetiton):
        number = int(sys.stdin.readline())
        sum += number

    if sum == 0:
        print(0)
    elif sum > 0:
        print("+")
    else:
        print("-")