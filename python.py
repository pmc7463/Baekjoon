N, W, H = map(int, input().split())

for _ in range(N):
    check = int(input())
    if check <= W or check <= H or (check ** 2 <= (W ** 2 + H ** 2)):
        print("DA")
    else:
        print("NE")