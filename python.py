re = int(input())

money = [25, 10, 5, 1]
count = [0, 0, 0, 0]

for i in range(re):
    put = int(input())

    for j in range(len(money)):
        count[j] = put // money[j]
        put %= money[j]

    print(' '.join(map(str, count)))