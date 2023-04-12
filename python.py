N = int(input())

for i in range(N):
    V, E = map(int, input().split())
    print(abs(V-E-2))

