mul = int(input())

while True:
    check = int(input())
    if check != 0:
        if check % mul == 0:
            print(f"{check} is a multiple of {mul}.")
        else:
            print(f"{check} is NOT a multiple of {mul}.")
    else:
        break
