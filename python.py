import sys

repetition = int(sys.stdin.readline())

A_cnt = 0
B_cnt = 0

for _ in range(repetition):
    A, B = map(int, sys.stdin.readline().split())

    if A > 100 or B > 100:
        break

    if A > B:
        A_cnt += 1
    elif A < B:
        B_cnt += 1

print(A_cnt, B_cnt)