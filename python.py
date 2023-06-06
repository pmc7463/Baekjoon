re = int(input())

for _ in range(re):
    str = input()
    num = int(str.split()[0])
    name = list(str.split()[1])
    name.pop(num-1)
    for i in name:
        print(i, end='')
    print()