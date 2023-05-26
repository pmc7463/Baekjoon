student = int(input())
array = []

for i in range(1, student + 1):
    array.append(i)

num = input()
num_list = list(map(int, num.split()))

count = 0

for i in range(student):
    if array[i] != num_list[i]:
        count += 1

print(count)
