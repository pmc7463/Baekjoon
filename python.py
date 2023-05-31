re = int(input())

temp = list(set(list(map(int, input().split()))))

print(*sorted(temp))