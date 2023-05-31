import sys

num1 = int(sys.stdin.readline())

num = sys.stdin.readline().rstrip() #개행 문자 제거
num_list = list(map(int, num.split()))

prefix_sum = [0] * (num1 + 1)

for i in range(1, num1 + 1):
    prefix_sum[i] = prefix_sum[i-1] + num_list[i - 1]

num2 = int(sys.stdin.readline())

for i in range(num2):
    A, B = map(int, sys.stdin.readline().split())
    print(prefix_sum[B] - prefix_sum[A-1])
