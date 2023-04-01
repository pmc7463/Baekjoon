re = int(input())
for _ in range(re):
    car = int(input())
    option = int(input())
    for _ in range(option):
        amount, price = map(int, input().split())
        car += amount * price
    print(car)