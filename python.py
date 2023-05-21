character = int(input())

for _ in range(character):
    HP, MP, Offensive, Defensive, HP_a, MP_a, Offensive_a, Defensive_a = map(int, input().split())

    fighting1 = HP + HP_a
    fighting2 = MP + MP_a
    fighting3 = Offensive + Offensive_a
    fighting4 = Defensive + Defensive_a

    if HP + HP_a < 1:
        fighting1 = 1

    if MP + MP_a < 1:
        fighting2 = 1

    if Offensive + Offensive_a < 0:
        fighting3 = 0

    print(fighting1 + 5 * fighting2 + 2 * fighting3 + 2* fighting4)