def summer(a,b,c):
    sum = 0
    sum += a * 3
    sum += b * 2
    sum += c
    return sum

A3 = int(input())
A2 = int(input())
A1 = int(input())

B3 = int(input())
B2 = int(input())
B1 = int(input())

if summer(A3,A2,A1) > summer(B3,B2,B1):
    print("A")
elif summer(A3,A2,A1) < summer(B3,B2,B1):
    print("B")
else:
    print("T")

