repetition = int(input())

data = {}

for i in range(repetition):
    temp1 = input()
    temp2 = temp1.split()

    Name = temp2[0]
    year = temp2[3]
    month = temp2[2]
    day = temp2[1]

    if len(month) == 1:
        month = '0' + month
    if len(day) == 1:
        day = '0' + day

    Number = year + month + day
    
    data[Number] = Name

max_data = max(data.keys())
min_data = min(data.keys())

max_name = data[max_data]
min_name = data[min_data]

print(max_name)
print(min_name)
    
