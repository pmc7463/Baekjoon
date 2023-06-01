while True:
    num = input()
    num_list = list(map(int, num.split()))

    if num_list[0] == -1:
        break
    else:
        count = 0
        for i in range(len(num_list) - 1):
            for j in range(len(num_list) - 1):
                if num_list[i] * 2 == num_list[j]:
                    count += 1
        print(count)