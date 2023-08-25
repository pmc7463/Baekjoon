def sol(n,a,b):
    return min(n,a//2+b)
 
n=int(input())
a,b = map(int, input().split())
 
print(sol(n,a,b))