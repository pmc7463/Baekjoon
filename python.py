repetition = int(input())

for i in range(repetition):
    r,e,c = map(int, input().split())

    if (e - c) > r:
        print('advertise')
    elif (e - c) < r:
        print('do not advertise')
    else:
        print('does not matter')