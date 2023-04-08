N, B = map(int, input().split())
s = ''
arr = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"

while N:
    s += str(arr[N%B])  # arr[N%B]는 나머지 문자를 추가하고 N을 N//B로 초기화 한다.
    N //= B

print(s[::-1])  # 오른쪽이 옛날 문자니까 뒤접어서 출력한다.