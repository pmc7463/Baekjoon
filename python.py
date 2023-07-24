import sys
from collections import deque

buffer = int(sys.stdin.readline())

queue = deque()

while True:
    packet = int(sys.stdin.readline())

    if packet == -1:
        break

    if len(queue) < buffer:
        if packet != 0:
            queue.append(packet)
        elif packet == 0:
            queue.popleft()

    elif packet == 0:
        queue.popleft()

    else:
        continue

if not queue:
    print("empty")
else:
    temp = list(queue)
    temp = map(str, temp)
    result = ' '.join(temp)
    print(result)