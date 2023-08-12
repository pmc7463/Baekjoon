import sys
input = sys.stdin.readline

repetition = int(input())

arr = []

for i in range(repetition):
    a, b = map(int, input().split())
    arr.append((a,b))

arr.sort(key= lambda x:(x[1], x[0]))

cnt = 0

#print(arr)
#print(arr[0][0])
#print(arr[0][1])

cnt = 0

temp = 0

for i in range(0,repetition):
    if arr[i][0] >= temp:
        if arr[i][0] <= arr[i][1]:
            cnt += 1
            temp = arr[i][1]
            #print("temp : ",temp)
print(cnt)