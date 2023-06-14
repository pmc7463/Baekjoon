i = 1 # 케이스 순서 저장 변수

while True:
    result = 0
    L, P, V = map(int, input().split())

    if L + P + V == 0:
        break

    # 위의 설명한 수식으로 계산하기
    result = ((V//P) * L) + min((V % P), L)
    print("Case {}: {}".format(i, result))
    i += 1