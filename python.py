target_str = "FBI"
input_list = [] # 입력받은 문자열을 저장할 리스트
result_list = [] # target_str이 포함된 문자열을 저장할 리스트

# 여러 문자열을 입력받음
for i in range(5):
    temp_str = input()
    input_list.append(temp_str)

# target_str이 포함된 문자열을 찾아서 result_list에 추가
for string in input_list:
    if target_str in string:
        result_list.append(string)
        
temp1 = []

for i, target_str in enumerate(input_list):
    if "FBI" in target_str:
        temp1.append(i + 1)

if temp1 == []:
    print("HE GOT AWAY!")

print(' '.join(map(str, temp1)))

