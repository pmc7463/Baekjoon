import sys
from collections import deque

def pizza(repetition, eat):
    queue = deque(enumerate(eat))
    answer = [0] * repetition
    cnt = 0

    while queue:
        index, left = queue.popleft()
        cnt += 1
        answer[index] = cnt
        left -= 1

        if left == 0:
            continue
        else:
            queue.append((index, left))

    print(" ".join(str(answer[i]) for i in range(repetition)))

repetition = int(sys.stdin.readline())

eat = list(map(int, sys.stdin.readline().strip().split()))

pizza(repetition, eat)