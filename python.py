repetition = int(input())

chair = list(map(int, input().split())) # [1, 2, 3]

overlap = len(list(set(chair))) # set함수는 중복 된 값들을 제거하고 남은 고유의 값 개수, len은 전체 길이

print(repetition-overlap)