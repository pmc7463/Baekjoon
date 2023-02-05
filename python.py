arr = []

N, K = map(int, input().split())
cnt = 0
for i in range(1, N + 1):   # 시작 부터 0으로 나눌 수 없으니까 1부터 시작해서 배열 끝 + 1까지
    if N % i == 0:
        arr.append(i)   # i값을 덧 붙여준다.
    cnt += 1

if K > len(arr):
    print(0)
else:
    print(arr[K - 1])
