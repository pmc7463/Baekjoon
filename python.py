import sys
input = sys.stdin.readline

star = int(input())

for i in range(star):
    print(('*'+' ')*(star - star//2))
    print((' ' + '*')*(star//2))