import sys

tap = int(sys.stdin.readline())

plug = 0

for i in range(1, tap + 1):
    plug += int(sys.stdin.readline())
    if i > 1:
        plug -= 1

print(plug)