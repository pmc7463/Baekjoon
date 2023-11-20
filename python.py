grid = [[0 for _ in range(1001)] for _ in range(1001)]
num_of_papers = int(input())

for p in range(1, num_of_papers+1):
    p_x, p_y, width, height = map(int, input().split())
    for y in range(p_y, p_y+height):
        grid[y][p_x:(p_x+width)] = [p]*width
            
for p in range(1, num_of_papers+1):
    result = 0
    for cnt in range(1001):
        result += grid[cnt].count(p)
    print(result)