from math import sqrt

num = int(input())

for i in range(num) :
    secret = input()
    
    save = int(sqrt(len(secret)))
    
    origin = ''
    
    for j in range (save-1, -1, -1):
        for k in range(0, len(secret), save) :
            word = secret[k : k + save]
            origin += word[j]
            
    print(origin)
            
