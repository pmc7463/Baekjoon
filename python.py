listening, view = map(int, input().split())

L = [0] * listening
V = [0] * view

for i in range(listening):
    L[i] = input()

for i in range(view):
    V[i] = input()

#print("************")

#print(L)
#print(V)
"""
cnt = 0

save = [0] * (listening + view)

for i in range(len(L)):
    for j in range(len(V)):
        if L[i] == V[j]:
            cnt += 1
            save[i] = V[j]

print(cnt)
#print(save)

filtered_list = sorted([item for item in save if isinstance(item, str)])

#print(filtered_list)

for i in filtered_list:
    print(i)
"""
#marge = set(L + V)

#print(marge)

result = sorted(list(set(L) & set(V)))
print(len(result))
#print(result)

for i in result:
    print(i)