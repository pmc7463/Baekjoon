N = int(input())

cnt = 0

def factorial(N):   # def 사용자 정의 함수 user defined function
    if N == 0:
        return 1
    else:
        return N * factorial(N-1)

fact = factorial(N)

for i in range(len(str(fact))):
    if fact % 10 == 0:   # %나머지 구할때 사용   
        cnt += 1
        fact //= 10     # //= 정수 나눗셈 (몫) 나눗셈 결과를 소수점을 버리고 정수만 얻고자 할때 사용
 
print(cnt)

