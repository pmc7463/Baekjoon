def backtracking(N, M, arr, check):
    if len(arr) == M:
        print(" ".join(map(str, arr)))
        return

    for i in range(1,N+1):
        if not check[i]:
            check[i] = True
            arr.append(i)
            backtracking(N, M, arr, check)
            arr.pop()
            check[i] = False

N, M = map(int, input().split())

check = [False] * (N+1)

backtracking(N, M, [], check)