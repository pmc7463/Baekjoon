N, P = map(int, input().split())

arr = []
N_temp = N

while True:
    N_temp = int(N_temp * N) % P
    
    if N_temp in arr:
        print(len(arr) - arr.index(N_temp))
        break

    arr.append(N_temp)