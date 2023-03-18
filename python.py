re = int(input())

A = list(map(int, input().split()))
B = list(map(int, input().split()))

# A는 내림차순, B는 오름차순으로해서 곱해서 더해주면 답이 나오기는 하나 문제에서 B를 정렬을 못하게 하였다.
#sorted_A = sorted(A, reverse=True)  #reverse = True 내림 차순 왼쪽에 큰숫자 오른쪽 작은 숫자
#sorted_B = sorted(B)

total = 0

for i in range(re):
    total += min(A) * max(B)    # 두 리스트에서 최솟값과 최댓값을 뽑아서 곱해서 더해준다.
    A.pop(A.index(min(A)))      # A리스트에서 최솟값을 pop한다.
    B.pop(B.index(max(B)))      # B리스트에서 최댓값을 pop한다.


#print(sorted_A)
#print(sorted_B)
print(total)