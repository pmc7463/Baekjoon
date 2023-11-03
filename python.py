arr = list(map(int, input().split(",")))

num_sum = 0

for i in range(len(arr)):
    num_sum += arr[i]

print(num_sum)