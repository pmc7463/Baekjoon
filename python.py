import sys
from collections import deque

chair = int(sys.stdin.readline())

human = list(input())

#print(human)

cnt = 0

flag = 0

for i in range(chair):
    if human[i] == "L":
        cnt += 1
        flag = 1
#print(cnt)


if flag == 1:
    print(chair - int(cnt / 2) + 1)
else:
    print(chair - int(cnt / 2))
