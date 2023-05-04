while True:
    num = list(map(int, input()))
    count = 0
    if num[0] == 0:
        break
    else:
        for i in range(len(num)):
            if num[i] == 0:
                count += 4
            elif num[i] == 1:
                count += 2
            else:
                count += 3

        print(count + len(num) + 1)