while True:
    T1, T2, T3 = map(int, input().split())

    maxTemp = max(T1, T2, T3)
    minTemp = min(T1, T2, T3)
    midTemp = T1 + T2 + T3 - maxTemp - minTemp

    if T1 == T2 == T3 == 0:
        break

    if maxTemp >= minTemp + midTemp:
        print("Invalid")
    else:
        if T1 == T2 == T3:
            print("Equilateral")
        elif T1 == T2 or T1 == T3 or T2 == T3:
            print("Isosceles")
        elif T1 != T2 != T3:
            print("Scalene")