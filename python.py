import sys

repetition, Time = map(int, sys.stdin.readline().split())

temp = list(map(int, sys.stdin.readline().split()))

s_sum = 0

for i in temp:
    Time -= i
    if Time >= 0:
        s_sum += 1
    else:
        break
print(s_sum)