case = int(input())

for _ in range(case):
    leg, chicken = map(int, input().split())
    cut = chicken * 2 - leg
    normal = (leg - cut)// 2
    print(cut, normal)
