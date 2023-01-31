N = int(input())                # 반복할 횟수 넣기

firstStr = list(input())        # 문자열 리스트에 넣기 ['l', 'i', 's', 't']
firstStr_len = len(firstStr)    # 첫번째 문자열 길이 구하기

for i in range(N - 1):          # 반복할 회수 만큼 반복
    otherStr = list(input())    # 다른 문자열 넣기
    for j in range(firstStr_len):   # 첫번째 문자열 길이 만큼 반복
        if firstStr[j] != otherStr[j] :     # 첫번째 문자열과 다른 문자열의 비교하여 같지 않을 때
            firstStr[j] = '?'   # 다르면 첫번째 문자열에 해당 인덱스에 '?' 넣어주기

print(''.join(firstStr))        # '구분자'.join(리스트)함수 사용해서 문자를 문자열로 바꿔 주기,  ['l', 'i', 's', 't'] -> ['list']