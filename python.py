import math

A, B = map(int, input().split(":"))

gcd = math.gcd(A, B)

reduced_A = A//gcd
reduced_B = B//gcd

print(f"{reduced_A}:{reduced_B}")