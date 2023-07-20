import sys
from collections import deque

N, W, L = map(int, sys.stdin.readline().strip().split())

truck = list(map(int, sys.stdin.readline().strip().split()))

bridge = [0] * W
time = 0
weight = 0

while True:
    out = bridge.pop(0)
    weight -= out

    if truck:
        if weight + truck[0] <= L:
            bridge.append(truck[0])
            weight += truck[0]
            truck.pop(0)
        else:
            bridge.append(0)

    time += 1

    if not bridge:
        break

print(time)