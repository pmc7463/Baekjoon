i = 1

while True:
    n0 = int(input())

    if n0 == 0:
        break

    n1 = 3 * n0
#    print(n1)

    flag = 0

    if n1 % 2 == 1:
        n2 = int((n1+1) / 2)
        flag = 1
    else:
        n2 = int(n1 / 2)
        flag = 0
#    print(n2)

    n3 = 3 * n2
#    print(n3)

    n4 = int(n3/9)
#    print(n4)

    if flag == 1:
        print(f"{i}. odd {n4}")
        i += 1
    else:
        print((f"{i}. even {n4}"))
        i += 1


