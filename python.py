re = int(input())

for _ in range(re):
    case, eat = map(int, input().split())

    candy_Sum = 0

    candy = input()
    candy_list = list(map(int, candy.split()))

    for i in range(case):
        candy_Sum += candy_list[i] // eat

    print(candy_Sum)
