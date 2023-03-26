x_charge = int(input()) #1리터당 요금
y_basic = int(input())  #기본금액

y_limit = int(input())  #기본요금 제한 금액
y_additional = int(input()) #추가요금   1리터당 요금
use = int(input())  #사용량 리터

x_sum = x_charge * use
y_sum = 0

if use >= y_limit:
    y_sum = use - y_limit
    y_sum *= y_additional
    y_sum += y_basic
else:
    y_sum = y_basic

if x_sum <= y_sum:
    print(x_sum)
else:
    print(y_sum)