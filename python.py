star = int(input())

for i in range(1, star + 1):
    if (i == 1 or i == star):
        print(" " * (star - i) + "*" * (2*i-1))
    else:
        print(" " * (star - i) + "*" + " " * (2 * (i - 1) - 1) + "*")