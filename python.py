plus, minus = map(int, input().split())

if plus-minus < 0 or (plus-minus) % 2 != 0:
    print(-1)

else:
    PpM = (plus + minus) // 2
    PpMmp = plus - PpM

    print(max(PpM,PpMmp), min(PpM,PpMmp))