time, start, maxPulse, train, rest = map(int, input().split())

counter = 0

total = 0

temp = start

if start + train > maxPulse:
    print(-1)

else:
    while counter < time :
        if start + train <= maxPulse:
            total += 1
            counter += 1
            start += train
        else:
            start -= rest
            if start < temp:
                start = temp
            total += 1

    print(total)