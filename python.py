re = int(input())

for _ in range(re):
    number = int(input())
    print(f"Pairs for {number}:", end = ' ')

    cnt = 1

    for i in range((number - 1)// 2):
        if i != 0:
            print(',', end = ' ')
        print(cnt, number  - cnt, end = '')
        cnt += 1
    
    print()
