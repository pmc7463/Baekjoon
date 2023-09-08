a, b = map(int, input().split())

arr = []
cnt = 0
temp = 0

if a > b:
    temp = a
    a = b
    b = temp

for i in range(a+1, b):
    cnt += 1
    arr.append(str(i))

print(cnt)
print(' '.join(arr))