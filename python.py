list = []   # 리스트 선언

for i in range(7):  # 7개의 숫자를 받는다.
    num = int(input())
    if num % 2 != 0:    # 받은 값이 짝수가 아니라면 list에 num을 추가한다.
        list.append(num)    # num값을 list 뒷 부분에 계속 추가한다.

if len(list) == 0:  # 리스트의 길이가 0이면 -1을 출력한다.
    print(-1)
else:
    print(sum(list))
    print(min(list))