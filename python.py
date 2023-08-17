arr = list(input())

#print(arr)

check = []

cnt = 0

for i in range(len(arr)):
    if arr[i] == "(":
        check.append("(")

    elif arr[i] == "*":
        check.append("*")

    elif arr[i-1] == "(" and arr[i] == ")":
        check.pop()

    else:
        if check[len(check)-2] == "(" and check[len(check)-1] == "*" and arr[i] == ")":
            check.pop()
            check.pop()
            check.append("*")
            cnt += 1
#print(check)
print(cnt)