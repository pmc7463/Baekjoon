T = int(input())

for _ in range(T):
    semester = int(input())
    C = 0
    G = 0
    sum1 = 0
    sum2 = 0
    average = 0
    for _ in range(semester):
        C, G = map(float, input().split())
        sum1 += C
        sum2 += C * G

        average = sum2 / sum1

    print(int(sum1), round(average,1))