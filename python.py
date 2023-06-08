re = int(input())

for _ in range(re):

    player = int(input())

    max_temp = 0

    for _ in range(player):
        soccer_player = input()
        money = int(soccer_player.split()[0])
        name = list(soccer_player.split()[1])

        if money > max_temp:
            max_temp = money
            max_name = name

    result = ''.join(max_name)
    print(result)
