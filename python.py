moneyA, moneyB = map(int, input().split())
chicken = int(input())

if moneyA + moneyB  >= chicken * 2:
    print((moneyA + moneyB) - chicken * 2)

else:
    print(moneyA + moneyB)
