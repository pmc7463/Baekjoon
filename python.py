arr = list(map(int, input().split()))

#print(arr)

arr = sorted(arr)

#print(arr)

if arr[1] + (arr[1] - arr[0]) == arr[2]:
    print(arr[2] + (arr[1] - arr[0]))
else:
    print(arr[2] - (arr[1] - arr[0]))