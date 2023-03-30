import math
inch, h, w = map(int, input().split())  #대각선, 높이 비율, 너비 비율

b = ((inch**2)/(((w/h)**2) + 1))**0.5   #피타고라스 비율 구하는 공식

a = (b*w)/h

#print(f"{b:.0f} {a:.0f}")
#print(b, a)
#print(round(b), round(a))
print(math.floor(b), math.floor(a)) # math.floor = 소수점 이하 버리기는 함수
