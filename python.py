import sys
from collections import deque

repetition = int(sys.stdin.readline())

balloon = []

for i in range(repetition):
    balloon.append(i)

order = list(map(int, sys.stdin.readline().split()))

zipped = zip(balloon, order)
zip_dict = dict(zipped)

queue = deque(zip_dict.items())
#print(queue)

while queue:
    balloon_num, shift_amount = queue.popleft()
    balloon_num += 1

    if shift_amount > 0:
        queue.rotate(-(shift_amount-1))
    else:
        queue.rotate(-shift_amount)

    print(balloon_num, end = " ")