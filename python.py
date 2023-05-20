Re = int(input())
for _ in range(Re):
    School = int(input())
    Alcohol_max = 0
    Final_name = ""
    for _ in range(School):
        School_name, School_alcohol = input().split()
        School_alcohol = int(School_alcohol)
        if Alcohol_max < School_alcohol:
            Alcohol_max = School_alcohol
            Final_name = School_name

    print(Final_name)
