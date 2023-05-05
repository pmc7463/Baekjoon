while True:
    num = int(input())
    if num == -1:
        break
    else:
        rest = []
        for i in range(1, num+1):
            if num % i == 0:
                rest.append(i)

        sumTemp = sum(rest[:-1])

        if sumTemp == num:
            print(f"{num} = {' + '.join(map(str, rest[:-1]))}")     
            #join 메서드는 이용해서 문자열을 구분자로 이용하여 리스트의 모든 요소를 연결해주는 메서드 입니다.
            #map 함수를 이용하여 리스트의 모든 요소를 문자열로 반환한 후 join 메서드를 사용하면 간단하게 리스트 안에 있는 모든 숫자를 하나의 문자열로 연결할 수 잇습니다.
            #6 = 1 + 2 + 3 한 줄로 출력
        else:
            print(f"{num} is NOT perfect.")