re = int(input())
maxMoney = 0

for i in range(re):
    a,b,c = map(int, input().split())
    if a == b == c:
        maxMoney = max(maxMoney, 10000+a*1000)
    elif a == b:
        maxMoney = max(maxMoney, 1000+a*100)
    elif a == c:
        maxMoney = max(maxMoney, 1000+a*100)
    elif b == c:
        maxMoney = max(maxMoney, 1000+b*100)
    else:
        maxMoney = max(maxMoney, max(a,b,c)*100)
print(maxMoney)