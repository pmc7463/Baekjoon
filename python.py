import sys
from collections import deque

student, interval = map(int, sys.stdin.readline().split())

cnt = 0
name = [0] * student
data = [0] * 21

for i in range(student):
    length = len(sys.stdin.readline().rstrip())
    name[i] = length

    if i > interval:
        data[name[i - interval - 1]] -= 1

    cnt += data[length]

    data[length] += 1

print(cnt)