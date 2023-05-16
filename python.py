binary = input();

decimal = int(binary,2)

decimal *= 17

binary = bin(decimal)

binary = binary[2:]

print(binary)