T = int(input())

for i in range(T):
    array_A = list(map(int, input().split()))   # 문자열.split() 문자열을 구분자로 나눔
    array_A.sort()
    print(array_A[-3])