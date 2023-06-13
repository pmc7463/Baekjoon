A_x, A_y = map(int, input().split())
A = [list(map(int, input().split())) for _ in range(A_x)]

B_x, B_y = map(int, input().split())
B = [list(map(int, input().split())) for _ in range(B_x)]

AxB = [[0] * B_y for _ in range(A_x)]
for row in range(A_x):
    for col in range(B_y):
        e = 0
        for i in range(A_y):
            e += A[row][i] * B[i][col]
        AxB[row][col] = e

for r in AxB:
    print(*r)