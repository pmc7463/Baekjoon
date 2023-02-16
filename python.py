grade1, grade2 = map(int, input().split())

if grade2 <= 2:
    print("NEWBIE!")
elif grade2 > 2 and grade2 <= grade1:
    print("OLDBIE!")
else:
    print("TLE!")