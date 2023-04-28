repetition = int(input())

for i in range(1, repetition + 1):
    dice1, dice2 = map(int, input().split())
    if dice1 >= 1 and dice1 <=  6 and dice2 >= 1 and dice2 <=  6:
        print(f"Case {i}: {dice1 + dice2}")