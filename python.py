kangaroo = list(map(int, input().split()))

A = kangaroo[2] - kangaroo[1]
B = kangaroo[1] - kangaroo[0]

print(max(A,B) - 1)