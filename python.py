re = int(input())

B = list(map(int, input().split()))

sumY = 0
sumM = 0

for i in range(re):
    Y = ((B[i] // 30) + 1) * 10
    M = ((B[i] // 60) + 1) * 15
    sumY += Y
    sumM += M

if sumY > sumM:
    print('M', sumM)
elif sumY < sumM:
    print('Y', sumY)
else:
    print('Y M', sumY)
