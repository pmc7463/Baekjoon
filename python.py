import sys
from collections import deque

check = [False] * 300001
check_box = 0

ABC = sys.stdin.readline().strip()

b = deque()

cnt = 0

for i in range(len(ABC)):
    if ABC[i] == "B":
        b.append(i)
    elif ABC[i] == "C":
        if b:
            check[b[0]] = True
            b.popleft()
            cnt += 1

b = deque()

for j in range(len(ABC)):
    if ABC[j] == "A":
        check_box += 1
    elif ABC[j] == "B":
        if check_box and not check[j]:
            check[j] == True
            check_box -= 1
            cnt += 1

print(cnt)