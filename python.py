import sys
h = int(sys.stdin.readline())
m = int(sys.stdin.readline())

h_list = ['zero', 'one', 'two', 'three', 'four', 'five',
          'six', 'seven', 'eight', 'nine', 'ten', 'eleven', 'twelve', 'one'] #시간 부분 리스트,뒤에 one을 한번 더 추가해서 배열의 초과를 막았다.

m_list = ['o\' clock', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine', 'ten', 'eleven', 'twelve', 'thirteen', 'fourteen', 'quarter', 'sixteen', 'seventeen',
          'eighteen', 'nineteen', 'twenty', 'twenty one', 'twenty two', 'twenty three', 'twenty four', 'twenty five', 'twenty six', 'twenty seven', 'twenty eight', 'twenty nine', 'half']#분 부분 리스트


def define(minute, hour, to_or_past, plus_zero):   #어떻게 출력할지 판별해주는 함수 plus_zero 변수는 to를 쓸 경우에는 현재의 시간보다 1시간뒤의 시간이 출력 되어야 해서 밑에 보면 if절로 경우를 나누었다.
    if minute == 1:   #1분 일때는 minute 단수형 출력
        print('%s minute %s %s' %
              (m_list[minute], to_or_past, h_list[hour+plus_zero]))
    elif minute == 30 or minute == 15:
        print('%s %s %s' %
              (m_list[minute], to_or_past, h_list[hour+plus_zero]))
    else:
        print('%s minutes %s %s' %
              (m_list[minute], to_or_past, h_list[hour+plus_zero]))


if m == 0:
    print('%s %s' % (h_list[h], m_list[m]))
elif 1 <= m and m <= 30:
    define(m, h, 'past', 0)
else:
    m = 60 - m
    define(m, h, 'to', 1)