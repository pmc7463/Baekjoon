input_str = input() # "1 2 3"과 같은 입력을 받음
numbers = input_str.split() # 공백으로 숫자들을 분리하여 리스트로 저장
numbers = [int(num) for num in numbers] # 문자열을 정수로 변환하여 리스트에 저장

sort = sorted(numbers)

Sum = int(sum(sort[:2]))

Max_list = sort[2:3]
Max = int(Max_list[0])

if Sum > Max:
    print(sum(numbers))
else:
    print(Sum*2-1)