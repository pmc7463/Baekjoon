import sys

N, L, D = map(int, sys.stdin.readline().split())

Time = [False] * (N*L+(N-1)*5)

for i in range(0, N*L+(N-1)*5, L+5):
    for j in range(i, i+L):
        Time[j] = True

for i in range(0, N*L+(N-1)*5, D):
    if not Time[i]:
        print(i)
        break
else:
    print(i+D)


