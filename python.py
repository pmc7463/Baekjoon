password = input()

for i in password:
    if ord(i) < 68: #ord('A') --> 65 
        print(chr(ord(i) + 23), end = "")   #char(65) --> A

    else:
        print(chr(ord(i) - 3), end = "")
