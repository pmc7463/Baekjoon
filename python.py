import sys

input = sys.stdin.readline

result = 0 #최댓값
num = 0 #사람들의 일시적인 값

for _ in range(10):
    a, b = map(int, input().split())    #내린 사람, 탄 사람
    num -= a    #내리다
    num += b    #타다
    result = max(result, num)   #최댓값 찾기

print(result)
