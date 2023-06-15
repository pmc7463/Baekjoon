A = list(input())
B = list(input())

A1, B1 = A[:], B[:]

remove_A = [x for x in A if not x in B1 or B1.remove(x)]
remove_B = [x for x in B if not x in A1 or A1.remove(x)]

print(len(remove_A) + len(remove_B))