stick = list(map(str, input()))

# print(stick)

check = []

result = 0

for i in range(len(stick)):
    if stick[i] == "(":
        check.append("(")

    else:
        if stick[i-1] == "(":
            check.pop()
            result += len(check)

        else:
            check.pop()
            result += 1

print(result)