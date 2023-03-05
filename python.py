hamburger = []
beverage = []

for i in range(0,3):
    a = int(input())
    hamburger.append(a)

for i in range(0,2):
    b = int(input())
    beverage.append(b)

print(min(hamburger) + min(beverage) - 50)