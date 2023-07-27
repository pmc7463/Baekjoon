import sys

while True:
    a1, a2, a3 = map(int, sys.stdin.readline().split())

    if a1 == 0 and a2 == 0 and a3 == 0:
        break

    AP = a3 - a2

    if a2 - a1 == AP:
        print(f"AP {a3 + AP}")

    if a1 != 0 and a2 != 0 and a3 != 0:
        GP = a3 / a2

        if a2 / a1 == GP:
            print(f"GP {int(a3 * GP)}")