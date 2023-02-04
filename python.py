testCase = int(input())

for _ in range(testCase):
    mars = list(map(str, input().split()))  # 문자열을 각 토근으로 쪼개서 받겠다.
    answer = eval(mars[0])      # eval(expression)는 매개변수로 받은 expression(사칙연산 식)같은거을 문자열로 받어서 실행하는 함수이다.
    for i in range(len(mars)):
        if mars[i] == "@":
            answer *= 3
        elif mars[i] == "%":
            answer += 5
        elif mars[i] == "#":
            answer -= 7

    print("%0.2f" %answer)  # %s는 문자열을 서식에 맞추어 출력해준다. (문자열만 해당됨)
