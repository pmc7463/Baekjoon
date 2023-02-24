arr = []

arr = list(map(int, input().split()))

remainder = sum(arr) - (min(arr) + max(arr))    #최소값과 최댓값을 뺀 나머지 항목들의 합

mentor = max(arr) + min(arr)


print(abs(remainder - mentor))