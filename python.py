N,M = map(int,input().split())
arr = [0] * N #arr 0으로 초기화

for x in range(M):  #반복
    i,j,k = map(int, input().split())
    for y in range(i, j+1, 1):
        arr[y-1] = k

for x in range(N):
    print(arr[x],'',end ='')    #한 줄로 출력