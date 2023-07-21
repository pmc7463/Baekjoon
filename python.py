import sys

repetition = int(sys.stdin.readline())

for _ in range(repetition):
    win = int(sys.stdin.readline())
    P1_cnt = 0
    P2_cnt = 0
    for _ in range(win):
        P1, P2 = map(str, input().split())
        if P1 == "R" and P2 == "S":
            P1_cnt += 1
        elif P1 == "R" and P2 == "P":
            P2_cnt += 1
        elif P1 == "R" and P2 == "R":
            P1_cnt += 1
            P2_cnt += 1

        elif P1 == "S" and P2 == "R":
            P2_cnt += 1
        elif P1 == "S" and P2 == "P":
            P1_cnt += 1
        elif P1 == "S" and P2 == "S":
            P1_cnt += 1
            P2_cnt += 1

        elif P1 == "P" and P2 == "R":
            P1_cnt += 1
        elif P1 == "P" and P2 == "S":
            P2_cnt += 1
        elif P1 == "P" and P2 == "P":
            P1_cnt += 1
            P2_cnt += 1

    if P1_cnt > P2_cnt:
        print("Player 1")
    elif P1_cnt < P2_cnt:
        print("Player 2")
    else:
        print("TIE")