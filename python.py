A, B, C, D = map(int, input().split())
hate = list(map(int, input().split()))

for i in hate:
    attacked = 0
    if 0 < i % (A+B) <= A:
        attacked += 1
    if 0 < i % (C+D) <= C:
        attacked += 1
    print(attacked)

