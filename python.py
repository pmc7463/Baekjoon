P, K = map(int, input().split())
number = K 

for i in range(2, K):
    if P % i == 0: 
        if number > i:
            number = i 

if number != K: 
    print('BAD', number)
else:
    print('GOOD')