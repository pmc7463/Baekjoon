import sys
input=sys.stdin.readline

N, L = map(int, input().split())

Num = str(L)

res = []
temp = 1

while True :
    if len(res) == N : break
    
    sign = 0
    
    tempNum = str(temp)
    
    for i in range(len(tempNum)) :
        if tempNum[i] == Num :
            sign = 1
            break
    
    if sign == 0 :
        res.append(temp)
    
    temp += 1
    
print(max(res))