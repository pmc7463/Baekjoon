amount = 0

while True:
    gambling = int(input())

    if gambling == -1:
        break
    else:
        amount += gambling

print(amount)