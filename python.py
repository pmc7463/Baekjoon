import sys

while True:
    st = sys.stdin.readline().rstrip('\n')

    if not st:
        break

    small, capital, num, blank = 0, 0, 0, 0

    for i in range(len(st)):
        if st[i].islower():
            small += 1
        elif st[i].isupper():
            capital += 1
        elif st[i].isdigit():
            num += 1
        else:
            blank += 1

    print(small, capital, num, blank)

