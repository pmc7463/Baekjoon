color = ['black', 'brown', 'red', 'orange', 'yellow', 'green', 'blue', 'violet', 'grey', 'white']

first = color.index(input())
second = color.index(input())
third = color.index(input())

resistance = int(str(first) + str(second)) * (10**third)
print(resistance)