re = int(input())
star = "*" + " *"*(re-1)
space = False

for i in range(re):
    print(" " + star if space else star)
    space = not space