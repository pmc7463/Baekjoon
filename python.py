repetition = int(input())

sum = 0

for _ in range(repetition):
    school, apple = map(int, input().split())
    sum += apple % school

print(sum)