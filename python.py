arr_A, arr_B = [], []

n, m = map(int, input().split())

for row in range(n):
    row = list(map(int, input().split()))
    arr_A.append(row)

for row in range(n):
    row = list(map(int, input().split()))
    arr_B.append(row)

for row in range(n):
    for col in range(m):
        print(arr_A[row][col] + arr_B[row][col], end = ' ')
    print()