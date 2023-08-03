import sys
from collections import deque

member = int(sys.stdin.readline())

arr = []

for i in range(1, member+1):
    arr.append(i)

#print(arr)

queue = deque(arr)

#print(queue)

i = 1

while queue:
    if len(queue) == 1:
        print(queue.popleft())
        break

    cut = (i ** 3) % member

    queue.rotate(-cut+1)
    temp = queue.popleft()
#    print(queue)
#    print(temp)
    i += 1
    member -= 1