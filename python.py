re = int(input())

array = []

for _ in range (re):
    num = input()   # 한 줄 입력 받음
    values = num.split()
    array.extend(values)

array = list(map(int, array))

odd = []
even = []
for i in range(len(array)):
    if i % 2 != 0:
        odd.append(array[i])
    else:
        even.append(array[i])

x = max(odd) - min(odd)
y = max(even) - min(even)

print(x * y)