dataType = int(input())

if dataType == 4:
    print("long int")
else:
    temp = dataType // 4
    print("long "*temp, end = "int")