N = input()
F = int(input())

Sli = int(N[:-2] + '00')    # 끝에서 두자리 슬라이싱

while True:
    if Sli % F == 0:
        break
    Sli += 1

print(str(Sli)[:-2])
