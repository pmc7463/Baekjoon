test = int(input())

for _ in range(test):
    number = input()

    A = int(len(number)/2 - 1)
    B = int(len(number)/2)

    #print(number[A])
    #print(number[B])

    if (number[A] == number[B]):
        print("Do-it")
    else:
        print("Do-it-Not")
