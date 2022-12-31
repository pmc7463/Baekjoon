num = int(input())
first = 666     # 처음 666인 수

while num != 0 :    # num이 0아니면 계속 반복
    if '666' in str(first): # 만약 666이란 문자열이 문자열(first)안에 있으면
        num = num - 1   # -1
        if num == 0:    # 만약 0이면
            break       # 반목문 탈출
    first = first + 1   # +1
print(first)