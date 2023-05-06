repetition = int(input())
arr = []
for _ in range(repetition):
    num = int(input())
    if num == 0:
        arr.pop(len(arr) - 1)
    else:
        arr.append(num)

print(sum(arr))