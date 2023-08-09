import heapq
import sys
from collections import deque

N = int(sys.stdin.readline())

arr = []

for i in range(N):
    arr.append(0)

for i in range(N):
    arr[i] = int(sys.stdin.readline())

arr = sorted(arr)

#print(arr)

result = 0

if len(arr) == 1:
    print(result)

else:
    for i in range(N-1):
        pre = heapq.heappop(arr)
        cur = heapq.heappop(arr)

        result += pre + cur
        heapq.heappush(arr, pre + cur)
    print(result)