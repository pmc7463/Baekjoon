woman, man, intern = map(int, input(). split())
cnt = 0
while woman >= 2 and man >= 1 and woman + man >= intern + 3: # 2명 , 1명 팀 만들 수 있고, 인턴쉽도 보낼 수 있는 수 일때
    woman -= 2
    man -= 1
    cnt += 1

print(cnt)