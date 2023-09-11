A, B = input().split()
N, M = len(A), len(B)

arr = [['.'] * N for _ in range(M)]

for i in range(N):
    flag = False
    for j in range(M):
        if A[i] == B[j]:
            row = j
            col = i
            flag = True
            break
            
    if flag == True:
        break
for i in range(N):
    arr[row][i] = A[i]

for i in range(M):
    arr[i][col] = B[i]

for i in range(M):
    print(''.join(arr[i]))