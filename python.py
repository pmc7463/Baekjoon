input_str = input()
x = list(input_str.split()[0])
y = list(input_str.split()[1])

x = ''.join(x)
y = ''.join(y)

Finish_reversed = str(int(x[::-1]) + int(y[::-1]))

print(int(Finish_reversed[::-1]))