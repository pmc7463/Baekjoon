import sys  # sys.stdin.readline()을 쓰기위해서
            # 반복문으로 여러 줄을 입력 받을 때 input()으로 받으면 시간초과가 발생 할 수 있다.
n = int(input())
card = list(map(int, sys.stdin.readline().split())) # map은 반복 가능한 객체(리스트 등)에 대한 각각의 요소들을 저장된 함수로 처리해주는 함수입니다.

m = int(input())
check = list(map(int, sys.stdin.readline().split()))    # a,b,c에 대한 int 형 변환

card.sort()

def binary_search(array, target, start, end):   # 이진 탐색 , 카드, 검사 카드, 0 ~ 카드 - 1
    while start <= end:
        mid = (start + end) // 2

        if array[mid] == target:
            return mid
        elif array[mid] > target:
            end = mid - 1
        else:
            start = mid + 1
    return None

for i in range(m):
    if binary_search(card, check[i], 0, n - 1) is not None:
        print(1, end = ' ')
    else:
        print(0, end = ' ')