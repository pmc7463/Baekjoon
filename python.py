import sys

number = int(sys.stdin.readline())

s_sum = 0
for i in range(1, number):
    s_sum += i * number + i

print(s_sum)