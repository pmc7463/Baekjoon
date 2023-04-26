rec = list(map(int, input().split()))

S_rec = sorted((rec)) # 4개의 수를 정렬

M_rec = S_rec[:-1]  # 가장 큰수 빼기

print(max(M_rec)*min(M_rec))    # 두번째로 긴 선분 * 가장 짧은 선분
