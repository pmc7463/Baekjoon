round = int(input())
for i in range(round) :
    A = list(map(int,input().split()))[1:]
    B = list(map(int,input().split()))[1:]
    lstA = [A.count(4),A.count(3),A.count(2),A.count(1)]
    lstB = [B.count(4),B.count(3),B.count(2),B.count(1)]
    if lstA[0] > lstB[0] :
        print('A')
    elif lstA[0] <lstB[0] :
        print('B')
    elif lstA[1] > lstB[1] :
        print('A')
    elif lstB[1] > lstA[1] :
        print('B')
    elif lstA[2] > lstB[2] :
        print('A')
    elif lstB[2] > lstA[2] :
        print('B')
    elif lstA[3] > lstB[3] :
        print('A')
    elif lstB[3] > lstA[3] :
        print('B')
    else :
        print('D')