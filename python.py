import sys

A, B = map(int, sys.stdin.readline().split())

arr = [[0 for _ in range(B+1)] for _ in range(A+1)] # 열 3 |||, 행 2 --

for i in range(1, A+1):
    temp = list(map(int, sys.stdin.readline().split()))
    for j in range(1, B+1):
        arr[i][j] = temp[j-1]

k = int(sys.stdin.readline())

for _ in range(k):
    i,j,x,y = map(int, sys.stdin.readline().split())
    result = 0

    for u in range(i, x+1):
        for w in range(j, y+1):
            result += arr[u][w]

    print(result)