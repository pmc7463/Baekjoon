dwarf = []

for i in range(9):
    dwarf.append(int(input()))

for i in range(9):
    for j in range(i+1, 9):
        if sum(dwarf) - dwarf[i] - dwarf[j] == 100:
            A, B = i, j
            break

dwarf.pop(A)
dwarf.pop(B-1)

for i in dwarf:
    print(i)