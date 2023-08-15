A, B, C = map(int, input().split())

arr = [list(map(int, input().split())) for _ in range(3)]

#print(arr) # 2차원 행렬

n = max(arr[0][1], arr[1][1], arr[2][1])

#print(n)  # 8

board = [0] * (n-1)

for truck in arr:
    for i in range(truck[0]-1, truck[1]-1):
        board[i] = board[i] + 1

#print(board)    # 주차 대 수 카운터

fee = 0

for check in board:
    if check == 1:
        fee += check * A
    elif check == 2:
        fee += check * B
    elif check == 3:
        fee += check * C

print(fee)
