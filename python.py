import sys
input = sys.stdin.readline

N = int(input())
lst = [list(map(int, input().split())) for _ in range(N)]
sorted_lst = sorted(lst, key=lambda x:(-x[0], x[1], x[2]))
print(lst.index(sorted_lst[0])+1)
