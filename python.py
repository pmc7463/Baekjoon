import sys
from collections import deque

n = int(input())
board = [[0] * (n + 1) for _ in range(n+1)]

k = int(input())
for _ in range(k):
    x, y = map(int, input().split())
    board[x][y] = 2

info = {}
l = int(input())
for _ in range(l):
    sec, direct = input().split()
    info[int(sec)] = direct

time = 0
x, y = 1, 1
board[y][x] = 1

dx = [1, 0, -1, 0]
dy = [0, 1, 0, -1]
d = 0

snake = deque([(1, 1)])

while True:
    nx = x + dx[d]
    ny = y + dy[d]

    if nx <= 0 or ny <= 0 or nx > n or ny > n or (nx, ny) in snake:
        break

    if board[ny][nx] != 2:
        a,b = snake.popleft()
        board[b][a] = 0

    x, y = nx, ny
    board[y][x] = 1
    snake.append((nx, ny))

    time += 1

    if time in info.keys():
        if info[time] == "D":
            d = (d + 1) % 4
        else:
            nd = 3 if d == 0 else d - 1
            d = nd

print(time + 1)