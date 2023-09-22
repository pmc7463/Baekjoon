R, C, N = map(int, input().split())
a = R//N + 1 if R%N else R//N
b = C//N + 1 if C%N else C//N
print(a*b)