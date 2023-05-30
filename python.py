C, K, P = map(int, input().split())

Wine_Sum = 0

for i in range(1, C+1):
    Wine_Sum += K*i + P*(i*i)

print(Wine_Sum)