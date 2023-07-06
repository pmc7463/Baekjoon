number = int(input())

sticker = [0] * 10  # initialization

for i in str(number):
    if i == "6" or i == "9":
        if sticker[6] == sticker[9]:    # [...0...0]
            sticker[6] += 1             # [...1...0]
        else:
            sticker[9] += 1             # [...1...1]

    else:
        sticker[int(i)] += 1            # 비어 있는 곳 1로 채우기

print(max(sticker))                     # 가장 큰 수가 세트 수
