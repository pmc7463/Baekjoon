re = int(input())

for i in range(re):
    P, C = map(int, input().split())
    print(f"You get {P//C} piece(s) and your dad gets {P%C} piece(s).")