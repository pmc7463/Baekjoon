number, number_of_times = map(int, input().split())

arr = []

for i in range(1, number + 1):
    arr.append(i)

for i in range(number_of_times):
    a, b = map(int, input().split())
    arr[a-1:b] = reversed(arr[a-1:b])   # reversed함수는 인자로 전달된 시퀀스 자료형을 뒤집어서 반환하는 함수
print(' '.join(map(str, arr)))  # [3, 4, 1, 2, 5] --> 3 4 1 2 5