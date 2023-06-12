stick = int(input())
cnt = 0

while stick != 0:
    if stick % 2 == 1:
        cnt += 1
    stick = stick // 2

print(cnt)