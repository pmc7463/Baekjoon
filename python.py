N = int(input())

i = 1
cnt = 0
while N != 0:
    if N >= i:
        N -= i
        i += 1
        cnt += 1
    else:
        i = 1

print(cnt)