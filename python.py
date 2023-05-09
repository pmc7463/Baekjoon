finish_Day, grow_Day, room, price = map(int, input().split())

i = 0
count = 0
while True:
    if i * grow_Day + 1 <= finish_Day:
        count += 1
        i += 1
    else:
        break

print((count - 1) * room * price)