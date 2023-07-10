from collections import deque
import sys

sys_input = sys.stdin.readline

n = int(sys_input())

q = deque([])

for _ in range(n):
    query = sys_input().split()

    if query[0] == 'push':
        q.append(query[1])

    elif query[0] =='pop':
        if len(q):
            print(q.popleft())
        else:
            print(-1)

    elif query[0] == 'size':
        print(len(q))

    elif query[0] == 'empty':
        if len(q):
            print(0)
        else:
            print(1)

    elif query[0] == 'front':
        if len(q):
            print(q[0])
        else:
            print(-1)

    elif query[0] == 'back':
        if len(q):
            print(q[-1])
        else:
            print(-1)
