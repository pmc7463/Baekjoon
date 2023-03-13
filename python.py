re = int(input())   # 전체 반복 횟수, 입력 받을 횟수
aSum = 100
bSum = 100

for i in range(re): # 반복
    a,b = map(int, input().split())
    if a > b:
        bSum -= a
    elif a < b:
        aSum -= b
    else:
        continue

print(aSum, bSum)
