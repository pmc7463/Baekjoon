counter = [[0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0]]  # 초기화


def school(sex, year):
    if sex == 0:
        counter[0][year - 1] += 1
    else:
        counter[1][year - 1] += 1


student, room = map(int, input().split())

for i in range(student):
    sex, year = map(int, input().split())
    school(sex, year)

room_count = 0
for i in range(6):
    for j in range(2):
        room_count += counter[j][i] // room
        if counter[j][i] % room > 0:
            room_count += 1

print(room_count)