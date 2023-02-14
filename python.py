password = input()
answer = ''

for i in password:
    if 'a' <= i and i <= 'z':
        i = ord(i) + 13
        if i > 122:
            i -= 26
        answer += chr(i)
    elif 'A' <= i and i <= 'Z':
        i = ord(i) + 13
        if i > 90:
            i -= 26
        answer += chr(i)
    else:
        answer += i

print(answer)