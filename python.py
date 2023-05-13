t = int(input())
stack = []

for _ in range(t):
    bar = int(input())

    while stack and stack[-1] <= bar:
        stack.pop()
    stack.append(bar)

print(len(stack))