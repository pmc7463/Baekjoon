problem = int(input())

score = 0
total = 0

board = list(map(int, input().split()))

for i in range(problem):
    if board[i] == 1:
        score += 1
        total += score

    else:
        score = 0

print(total)
