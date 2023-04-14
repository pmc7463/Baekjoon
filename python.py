s = list(map(int, input().split()))
abc = list(input())
s.sort()
for i in abc:
    if i == "A":
        print(s[0], end=" ")
    elif i == "B":
        print(s[1], end=" ")
    else:
        print(s[2], end=" ")