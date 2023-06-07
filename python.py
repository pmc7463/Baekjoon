re = int(input())

for _ in range(re):
    input_str = input()
    str_list = list(input_str)

    uppercase_set = set()  # 등장한 대문자들을 저장하기 위한 집합
    total_possible_sum = (ord('A') + ord('Z')) * (ord('Z') - ord('A') + 1) // 2

    for char in str_list:
        if 'A' <= char <= 'Z':  # 대문자인 경우에만 처리
            uppercase_set.add(char)

    missing_uppercase_sum = total_possible_sum - sum(ord(char) for char in uppercase_set)

    print(missing_uppercase_sum)
