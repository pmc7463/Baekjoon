case = int(input())

for i in range(case):
    part = input()  # "1 2 3" 과 같은 입력을 받음
    numbers = part.split()  # 공백으로 숫자들을 분리하여 리스트로 저장
    numbers = [int(num) for num in numbers] # 문자열을 정수로 변환하여 리스트에 저장

    money = [350.34,230.90,190.55,125.30,180.90]

    sum = 0

    for i in range(5):
        sum += numbers[i] * money[i]

    formatted_sum = '{:.2f}'.format(sum)
    print(f"${formatted_sum}")