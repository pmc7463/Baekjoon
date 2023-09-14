test = int(input())

for i in range(test):
    arr = sorted(map(int, input().split()))

    #print(arr)

    if arr[0]**2 + arr[1]**2 == arr[2]**2:
        print(f"Scenario #{i+1}:")
        print("yes")

    else:
        print(f"Scenario #{i+1}:")
        print("no")
        
    print("")