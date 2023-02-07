import sys

a, b = map(int, sys.stdin.readline().split())

temp = []

for i in range(b + 1):  # 반복문을 통해 b구간까지의 수열을 만든다.
    for j in range(i):
        temp.append(i)  # temp리스트에 i값을 계속 붙여준다.

print(sum(temp[a - 1 : b])) # a - 1 배열 부터 b 배열 까지 총 합 구하기 

