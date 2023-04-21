count = [0] * (1000 + 1) # 개수를 셀 0 ~ 1000까지의 리스트를 0으로 초기화

Sum = 0

for _ in range(10):
    num = int(input())
    Sum += num
    count[num] += 1 # 해당 num의 개수를 +1 씩 해준다.

print(Sum // 10)
print(count.index(max(count)))