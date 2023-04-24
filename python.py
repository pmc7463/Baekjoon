repetition = int(input())

line = list(map(int, input().split())) # [0, 1, 2, 3, 4, 5]

food = []

for i in range(repetition):
    if line[i] == 0:
        food.insert(0,i+1) # insert 함수의 첫번째 인수는 삽입할 위치를 지정하는 인덱스, 두 번째는 인수는 삽입할 요소
    else:
        food.insert(line[i], i+1) # insert 함수의 첫번째 인수는 삽입할 위치를 지정하는 인덱스, 두 번째는 인수는 삽입할 요소

reverse = food[::-1]

reverse1 = " ".join(str(i) for i in reverse) # join() 함수는 문자열을 연결하는 메서드이다. 문자열을 이용하여 리스트나 튜플을 하나의 문자열로 합칩니다.

print(reverse1)