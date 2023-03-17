re = int(input())

for _ in range(re):
    method = bin(int(input()))[2:]  # 0b1101에서 0b를 제거해주기 위해서 사용
    for i in range(len(method)):
        if method[-i-1] == '1':     # method에 담긴 2진수를 역순으로 보기 위해서
            print(i, end = ' ')