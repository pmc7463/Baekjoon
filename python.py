N, K = map(int, input().split())

arr = list(map(int, input().split(',')))

temp = []

for i in range(K):
    for j in range(len(arr) - 1):
        temp.append(arr[j+1] - arr[j])

    arr = temp
    temp = []

arr = list(map(str, arr))

print(','.join(arr))