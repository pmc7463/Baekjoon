# Baekjoon
## 백준 도전 中  
*************
# 2022-12-20 Tuesday(1)
* 15726 '이칙연산' 문제
+ 잠이와서 실수를 많이 하였다.
***
# 2022-12-19 Monday(1)
* 1145 '적어도 대부분의 배수' 문제
+ 급하게 풀었는데 맞춰서 다행이다.
***
# 2022-12-18 Sunday(1)
* 3058 '짝수를 찾아라' 문제
+ 짝수를 구해서 짝수합을 구하고, 짝수중에 최솟값을 구하는 문제
***
# 2022-12-17 Saturday(1)
* 9610 '사분면' 문제
+ 처음으로 스스로 동적할당을 써야할 이유를 알고 정확하게 문제에 적용한것 같다.
***
# 2022-12-16 Friday(1)
* 2953 '나는 요리사다' 문제
+ 처음에는 1차원 배열로 풀었었는데, 다시 생각해보니 2차원 배열 쓰는게 가독성 측에서 좋을것 같아서 바꾸었다.
***
# 2022-12-15 Thursday(1)
* 2748 '피보나치 수 2' 문제
+ 90까지 구하기 위해서 동적 프로그래밍 개념을 사용했고
+ int 범위를 벗어나기 때문에 long long int를 사용해 범위를 늘려주었다.
***
# 2022-12-14 Wednesday(1)
* 19698 '헛간 청약' 문제
+ 삼항연사자를 써서 풀었다.
+ printf("%d\n", cow < answer ? cow : answer);
***
# 2022-12-13 Tuesday(1)
* 1924 '2007년' 문제
+ 1월 달일때 따로 처리해주고, 1월 이후는 각 월에 맞는 값을 더해줘서 % 7를 해서 요일을 구한다.
*** 
# 2022-12-12 Monday(1)
* 20499 'Darius님 한타 안 함?' 문제
+ scanf("%d/%d/%d", &kill, &death, &assist)
+ 설정을 / 해줘야 / 입력 할 수있다.
***
# 2022-12-11 Sunday(1)
* 2747 '피보나치 수' 문제
+ 재귀함수로 풀었으나 시간이 많이 걸려서 틀렸다.
+ 제귀함수는 O(n^2)이다. 그래서 반복문을 사용해서 풀어서 정답을 맞추었다.
```
    int num, a = 0, b = 1, c;
    scanf("%d", &num);

    if (num < 2) {
        if (num == 0)
            printf("0\n");
        else
            printf("1\n");
    }
    else {
        for (int i = 0; i < num - 1; i++) {
            c = b + a;
            a = b;
            b = c;
        }
        printf("%d\n", c);
    }
```
***
# 2022-12-10 Saturday(1)
* 2231 '분해합' 문제
+ 브루드포스 알고리즘 문제로서 주어진 값에서 자릿수를 구하여 * 9를 하여 시작할 범위를 구해서 하면 문제 풀면 된다.
+ 하지만 내가 푼 문제는 1부터 다 검사하는 방법으로 풀었다.
+ [코드참고](https://loding.tistory.com/82)
***
# 2022-12-09 Friday(1)
* 7568 '덩치' 문제
+ scanf("%d %d", &body[i][0], &body[i][1]);
+ 값을 이렇게 받을 수 있다는 것을 알게되었다.
***
# 2022-12-08 Thursday(1)
* 16486 '운동장 한 바퀴' 문제
+ 원 둘레 = 2 * 반지름 * 3.141592
***
# 2022-12-07 Wednesday(1)
* 17362 '수학은 체육과목 입니다 2' 문제
+ 오랜만에 스위치문을 써서 풀어보았다.
```
    case 2:
    case 0:
        printf("2\n");
        break;
```
***
# 2022-12-06 Thursday(1)
* 2490 '윷놀이' 문제
+ 코드는 첫번째 입력을 하면 출력이 안된다. 2번 째 부터 답이 뜬다. 이렇게 되면 원래는 틀린것인데 답은 이상하게도 맞다. 신기하다. 인터넷은 비쥬얼 스튜디오의 오류라고 한다.
***
# 2022-12-05 Monday(1)
* 15439 'Vera and Outfits' 문제
+ 입력 * (입력 - 1)
***
# 2022-12-04 Sunday(1)
* 17388 '와글와글 숭고한' 문제
+ 처음에는 배열을 사용해서 오름차순으로 하여 가장 낮은 학교 점수는 구했으나, 배열이 바뀌면서 학교를 특정 할 수 없었다.
+ 그래서 각 학교마다 변수를 선언하였다.
***
# 2022-12-03 Saturday(1)
* 2445 '별 찍기 -8' 문제  
    \*&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; \*  
    \*\*&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; \*\*  
    \*\*\*&nbsp; &nbsp; &nbsp; &nbsp; \*\*\*  
    \*\*\*\*&nbsp; &nbsp; \*\*\*\*  
    \*\*\*\*\*\*\*\*\*\*  
    \*\*\*\*&nbsp; &nbsp; \*\*\*\*  
    \*\*\*&nbsp; &nbsp; &nbsp; &nbsp; \*\*\*  
    \*\*&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; \*\*  
    \*&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; \*
+ 조금씩 그려보면서 풀었다.
***
# 2022-12-02 Friday(1)
* 11945 '뜨거운 붕어빵' 문제
+ 입력받은 배열을 역순으로 출력하는 문제이다.
```
    for ( int i = 0; i < row; i++ ) {
        scanf("%s", str);
        for (int j = col-1; j >= 0; j-- ) {
            printf("%c", str[j]);
        }
        printf("\n");
    }
```
***
# 2022-12-01 Thursday(1)
* 5575 '타임 카드' 문제
+ 배열을 가지고 사칙연산해서 문제를 풀었다.
+ 코드를 줄일 필요성이 있다.
***
# 2022-11-30 Wednesday(1)
* 10987 '모음의 개수' 문제
+ 문장을 받아서 문자로 나누어 모음이 있는지 확인했다.
***
# 2022-11-29 Tuesday(1)
* 11948 '과목선택' 문제
+ 내림차순으로 정렬하여 특정 범위를 더한값과 다른값을 더하는 문제이다.
+ 내림차순으로 정리하는 방법을 알게되어서 기쁘다.
```
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
```
***
# 2022-11-28 Monday(1)
* 2309 '일곱 난쟁이' 문제
+ 처음에는 7개의 숫자를 가지고 모든 경우의 수를 구할려고 했는데 너무 많아서 힌트를 보았다.
+ 9개의 합 - 7개의 합 = 결과값을 가지고 하면 경우의 수가 많이 줄어서 풀수 있겠되었다. 
+ 사고의 전환이 필요한 문제였다.
+ [코드 설명]("https://kagus2.tistory.com/7")
***
# 2022-11-27 Sunday(1)
* 3053 '택시 기하학' 문제
+ 유클리드는 알았지만 비 유클리드인 택시 기하학은 처음 들었다.
+ 공식 반지름 * 반지름 * 2 이다.
***
# 2022-11-26 Saturday(1)
* 5338 '마이크로소프트 로코' 문제
+ 로고출력하면된다.
+ 따로 \해줄 필요도 없는 간단한 문제
***
# 2022-11-25 Friday(1)
* 5597 '과제 안 내신 분..?' 문제
+ 입력한 숫자의 있는지 없는지 구분하는 문제
+ 하나하나 비교하기 위해서 반복문 사용
+ 비교하기 위한 기준 배열 만들기 1 ~ 30
+ 반복문을 너무 많이 사용했다. 줄일 수 있는 방향을 생각하지 못했다.
***
# 2022-11-24 Thursday(1)
* 2798 '블랙잭' 문제
+ 브루트포스 문제, 경우의 수 전부 더해 보는 문제
+ 3장의 카드 -> for 3번 사용
+ [코드참고]("https://mjeong9316.tistory.com/162")
***
# 2022-11-23 Wednesday(1)
* 10807 '개수 세기' 문제
+ 몇 개 등장하는지 표시하는 문제인데, 몇 번째 등장하는 것으로 착각해 틀렸다.
+ 카운터 써서 구하고자 하는 숫자와 같은 수가 몇번 등장하는지 맞추는 문제이다.
***
# 2022-11-22 Tuesday(1)
* 3009 '네 번째 점' 문제
+ 조건문을 잘 생각하면 되는 문제
+ 배열 크기를 잘 못생각해서 계속 틀렸다.
*** 
# 2022-11-21 Monday(1)
* 24086 '身長 (Height)' 문제
+ 두 입력 받아서 사칙연산하는 문제
***
# 2022-11-20 Sunday(2)
* 10768 '특별한 날' 문제
+ if - else if - else 를 잘 구분해서 풀어야하는 문제이다.
***
# 2022-11-20 Sunday(1)
* 15963 'CASIO' 문제
+ if-else 문제이다.
***
# 2022-11-19 Saturday(1)
* 10699 '오늘 날짜' 문제
+ 처음 출력 보는 형식이다. 기억하고 있어야겠다.
```
#include <stdio.h>
#include <time.h>

int main()
{
    struct tm *t;
    time_t timer;
    timer = time(NULL);
    t = localtime(&timer);

    printf("%d-%02d-%02d", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);
    return 0;
}
```
***
# 2022-11-18 Friday(1)
* 11718 '그대로 출력하기 1' 문제
+ 어제 풀었던 문제와 똑같은 코드이다.
***
# 2022-11-17 Thursday(1)
* 11719 '그대로 출력하기 2' 문제
+ 공백도 같이 출력하는 문제이다.
+ 이 방식은 기억해두고 있으면 좋을것 같다.
+ EOF (End Of File) 조건으로, 입력이 끝날 때까지 루프를 반복한다.
```
    while(scanf("%c", &a) != EOF)
        printf("%c", a);
```
***
# 2022-11-16 Wednesday(1)
* 10953 'A+B-6' 문제
+ 문제는 쉬운데 내가 scanf에 대해서 잘 몰랐다.
+ scanf("%d,%d")가 있을 때 중간에 콘마(,)도 같이 타이핑 하면 출력한다.
+ 오늘 처음알았다.
***
# 2022-11-15 Tuesday(1)
* 15680 '연세대학교' 문제
+ 조건에 따라 출력이 달라지는 문제
+ 비상용--
***
# 2022-11-14 Monday(1)
* 11943 '파일 옮기기' 문제
+ 배열을 이용해 사칙연산 하는 문제
+ 어떻게 풀어야 할지 처음에는 당황스러웠는데 여러 조합을 통해 이해하고 바로 코드로 구현 하였다.
***
# 2022-11-13 Sanday(1)
* 11721 '열 개씩 끊어 출력하기' 문제
+ scanf("%s", arr) 문자는 주소값을 가지고 있기 때문에 &를 붙이지 않아도 된다.
+  if ((i + 1)  % 10 == 0) 10개씩 끊기 위해서 이 식을 사용했다.
***
# 2022-11-12 Saturday(1)
* 10817 '세 수' 문제
+ 조건을 헷갈리지 않도록 조심하자
***
# 2022-11-11 Friday(1)
* 10101 '삼각형 외우기' 문제
+ if-else 만 잘 사용하면 쉽게 맞출수 있는 문제이다.
***
# 2022-11-10 Thusday(1)
* 5532 '방학 숙제' 문제
+ for (int i = 1; ;i++) 무한으로 돌릴 때
+ 비상용 코드 사용
***
# 2022-11-09 Wednesday(1)
* 7287 '등록' 문제
+ 시간이 없어 간단한 문제를 풀었다.
+ 내가 푼 문제 수를 정확히 작성해야 맞는 문제이다.
+ 출력양식 그대로 했다가 틀렸다.
***
# 2022-11-08 Tuesday(1)
* 10156 '과자' 문제
+ 간단한 사칙연산 문제
+ 조건을 잘 생각해야하는 문제
***
# 2022-11-07 Monday(1)
* 25703 '포인터 공부' 문제
+ 포인터 문제를 풀어 볼려고 검색했는데 포인터 모양을 출력하는 문제였다.
+ 1,2,3 줄 까지 따로 경우를 나눠어서 출력해야한다.
+ 4번째 줄 부터 ***포인터 문자와 증가하는 정수를 같이 나타내야 하는데 한 문장으로 안되서 문장을 3문장으로 분리해서 표현하였다.
```
printf("int ");
    for (int j = 0; j < i + 2; j++) {
        printf("%c", star);
    }
    printf("ptr%d = &ptr%d;\n", i + 2, i + 1);
```
***
# 2022-11-06 Sunday(1)
* 2530 '인공지능 시계' 문제
+ 현재 시간 + 추가시간 구하는 문제
+ 코드가 너무 지저분한것 같다. 분명 줄일수있을것 같은데
```
    second += cook % 60;
    time1 = cook / 60;
    if (time1 >= 60) {
        hour += time / 60;
        minute += time1 % 60;
    }
    else 
        minute += time1;

    if (second >= 60) {
        minute += second / 60;
        second %= 60;
    }
    if (minute >= 60) {
        hour += minute / 60;
        minute %= 60;
    }
    if (hour >= 24)
        hour %= 24;
```
***
# 2022-11-05 Saturday(2)
* 10797 '10부제' 문제
+ 배열에 값을 저장해서 찾고자 하는 숫자가 몇번 나오는지 묻는 문제이다.
***
# 2022-11-05 Saturday(1)
* 3046 'R2' 문제
+ 간단한 미지수 X 구하는 문제
***
# 2022-11-04 Friday(1)
* 2444 '별 찍기 - 7' 문제
+ 저번에도 언급했지만 범위가 너무 어렵다.
+ 공책에 써서 해보자
***
# 2022-11-03 Thursday(1)
* 5717 '상근이의 친구들' 문제
+ 입력 값을 합해서 출력하는 문제
+ 0 0 다음 0 출력 하면안됨
***
# 2022-11-02 Wednesday(1)
* 11365 '!밀비 급일' 문제
+ scanf로는 띄어쓰기를 받을 수 없어 gets를 사용
***
# 2022-11-01 Tuesday(1)
* 2845 '파티가 끝나고 난 뒤' 문제
+ 배열을 이용해서 연산하고 다시 배열에 저장하는 문제
***
# 2022-10-31 Monday(1)
* 9316 'Hello Judge' 문제
+ 출력문 빠진거 없는지 확인하기
+ 비상용 문제 하나 사용
***
# 2022-10-30 Sunday(1)
* 2446 '별 찍기 - 9' 문제
+ 별 찍기 문제는 틀은 알겠는데 매번 할때 마다 범위가 헷갈린다.
+ 그래도 이제는 하다보면 맞춘다.
***
# 2022-10-29 Saturday(1)
* 1932 '정수 삼각형' 문제
+ dp문제는 처음 보는 구조이다.
+ 기본 개념없이 코드 자체만 이해하고 넘어가지만 다음에는 개념을 파악해야겠다.
+ [개념설명](https://travelerfootprint.tistory.com/164)
+ [코드설명](https://velog.io/@kimmainsain/C%EC%96%B8%EC%96%B4-%EB%B0%B1%EC%A4%80-1932-%EC%A0%95%EC%88%98-%EC%82%BC%EA%B0%81%ED%98%95)
***
# 2022-10-28 Friday(1)
* 4562 'No Brainer' 문제
+ 영어단어 위주로 해석을 하니 정확하게 할 수 가 없었어 답답하다.
+ 좀 더 어려운 문제에 도전해야하는데 매일 쉬운것만 하니 조급하다.
***
# 2022-10-27 Thursday(1)
* 5554 '심부름 가는 길' 문제
+ 반복으로 입력을 받을때 &time[i] 반복 변수를 넣어줘야한다.
+ 컴파일 있다면 수정이 가능한데 손코딩으로 하면 실수하는것을 알 수 없다.
```
    for (int i = 0; i < 4; i++) {
        scanf("%d", &time[i]);
        sum += time[i];
    }
```
***
# 2022-10-26 Wednesday(1)
* 1550 '16진수' 문제
+ 진법 변환 문제에 대해서 많이 공부를 안한것 같다.
```
    scanf("%X", &input);

    printf("%d\n", input);
```
***
# 2022-10-25 Tuesday(1)
* 10808 '알파벳 개수' 문제
+ 처음에는 알파벳 전체에 대해서 표현 했는데 진짜 단순히 구성했었다.
+ EOF라는 파일 종료 코드를 사용해보았다.
+ [EOF 사용법](https://ansan-survivor.tistory.com/1301)
+ 초반에 이런 종류의 문제를 풀었는데 왜 생각이 않났을까?
```
    while (scanf("%c", &str) != EOF) {
        if (97 <= str && str <= 122)
            arr[str - 97]++;
        else
            break;
    }
```
***
# 2022-10-24 Monday(1)
* 8545 'Zadanie próbne' 문제
+ 문자뒤집기 문제이다.
+ 나는 반복문을 써서 뒤집었는데 틀렸다.
+ 다른 사람들은 임시저장을 통해서 뒤집었다.
```
    char arr[4] = "";   // arr 전부 0으로 초기화
    int count = 0;
    int i = 0;
    int temp;
    gets(arr);

    while (arr[i++] > 0)
        count++;
    
    for (i = 0; i < count / 2; i++) {
        temp = arr[i];
        arr[i] = arr[count - i - 1];
        arr[count - i - 1] = temp;
    }
```
***
# 2022-10-23 Sunday(1)
+ 별 문제는 할 때마다 헷갈린다.
+ 이런 문제를 미리 메모장으로 풀어봐서 다행이다.
```
for (int i = input; i > 0; i--)
    {
        for (int j = input - i; j > 0 ; j--)
            printf(" ");
        for (int k = 2 * i - 1; k > 0; k--)
            printf("*");
        printf("\n");
    }
```
***
# 2022-10-22 Saturday(1)
+ 최소 공배수를 구할 때는 유클리드 호재법 사용하기
+ 혼자 생각하다가 공식을 보았다.
```
int gcd(int x, int y) {
    int temp;

    while (y > 0) {
        temp = x;
        x = y;
        y = temp % y;
    }
    return x;
}
```
***
# 2022-10-21 Friday(1)
+ 파이썬으로 문제를 풀었다.
+ C언어로 푼 사람은 다 틀렸다. 왜 틀린지 모르겠다.
+ 문제 자체는 정말 쉬운데 틀리는 이유를 모른다.
+ 파이썬은 너무 간단하게 해결되서 너무 신기하다.
***
# 2022-10-20 Thursday(1)
+ c언어로 도전했지만 몰라서 구글링 했더니 파이썬 뿐이라서 소스코드를 보니 딸랑 1줄이 끝이다.
```
print(chr(44031+int(input())))
```
+ 너무 어이가 없었지만 오늘은 시간이 없는 관계로 넘어간다.
***
# 2022-10-19 Wensday(1)
* 24751 'Betting' 문제
+ float는 입력 %f,  출력 %f
+ double는 입력 %lf, 출력 %f
***
# 2022-10-18 Tuesday(1)
* 9086 '문자열' 문제
+ 시험 대비해서 메모장으로 해봤는데 상당히 어렵다.
+ 출력형식을 자세히 읽지 않아 2번이나 틀렸다.

+ 문자열 초기화
```
	char arr[10] = {'\0'};

    int size = sizeof(arr)/ sizeof(arr[0]);

    for(int i = 0; i < size; i++) {
        printf("%c \n", arr[i]);
    }
```
***
# 2022-10-17 Monday(1)
* 2420 '사파리월드' 문제
+ 수의 범위가 커서 long long int를 사용했다.
+ long long int의 절댓값을 구하기 위해서 llabs()함수를 사용했다.
+ llabs()함수를 쓰기 위해서 #include <stdlib.h> 헤더파일이 있어야한다.
```
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long int a ,b;

    scanf("%lld %lld", &a, &b);

    printf("%lld\n", llabs(a - b));

    return 0;
}
```
***
# 2022-10-16 Sunday(1)
* 5543 '싱글날드' 문제
+ 함수를 만들어 보았다.
+ 삼항 연산자를 사용해 세 수의 비교를 하였다.
```
int hamburger (int a, int b, int c) {
    int min;
    min = ((a < b) && (a < c))? a: ((b < a) && (b < c))? b: c;

    return min;
}
```
***
# 2022-10-15 Saturday(3)
* 4589 'Gnome Sequencing' 문제
+ 영어 능력이 부족하다보니 이해를 하지 못했다.
+ 출력을 한 번만 하고 싶을때
```
    if (i == 0)
        printf("Gnomes:\n");
```
***
# 2022-10-15 Saturday(2)
* 2083 '럭비 클럽' 문제
+ 조건 실수 하지 않도록 주의하자!
***
# 2022-10-15 Saturday(1)
* 1264 '모음의 개수' 문제
+ ctype.h 파일은 문자의 종류를 알아내는 라이브러리다
+ tolower를 사용해서 입력된 문자를 대문자로 바꿔 준다.
+ fgets(arr, sizeof(arr), srtlen) 을 사용해서 문자를 받았다.
+ fgets 함수는 FILE 구조체를 사용하여 파일 입출력 스트림에서 문자열을 가져오는 함수이다.
```
#include <stdio.h>
#include <ctype.h>  // 문자의 종류를 알아내는 라이브러리

int main(void) {
    char arr[257];
    
    while (1) {
        int count = 0;
        fgets(arr, sizeof(arr), stdin);
            if (arr[0] == '#')
                return 0;
            for (int i = 0; arr[i] != '\0'; i++) {
                if (tolower(arr[i]) == 'a' || tolower(arr[i]) == 'e' || tolower(arr[i]) == 'i' || 
                tolower(arr[i]) == 'o' || tolower(arr[i]) == 'u')
                    count++;
            }
            printf("%d\n", count);
    }
    return 0;
}
```
***
# 2022-10-14 Friday(1)
* 2752 '세 수 정렬' 문제
+ 주먹구구식으로 풀었는데 이렇게 반복 안하고 풀 수 있는 방법이 떠오르지 않는다.
+ 정말 창의력이 부족한것 같다.
***
# 2022-10-13 Thurday(1)
* 8370 'Plane" 문제
+ 오늘도 급하게 한 문제만 풀고 끝낸다.
***
# 2022-10-12 Wednesday(1)
* 15733 '나는 누구인가' 문제
+ 오늘은 바뻐서 아침에 간단하게 하고 간다.
***
# 2022-10-11 Tuesday(1)
* 2442 '별 찍기 - 5' 문제
+ 정답을 맞췄는데도 이게 왜 되지? 라는 말을 했다.

+ 첫번째 (내가 한 방법)
```
    for (int i = 1; i <= input; i++) {
        for (int k = input - i; k > 0; k--) {
            printf(" ");
        }

        for (int j = 0; j < i; j++) {
            printf("*");
        }

        for (int p = 1; p < i; p++) {   // j의 별이 끝나면 p의 별 시작, 첫번째는 실행 하면 안됨
            printf("*");
        }
        printf("\n");
    }
```
+ 두번째
```
    for (int i = 1; i <= input - i; i++) {
        for (int j = input - i; j > 0; j--) 
            printf(" ");
        for (int k = 0; k < 2 * i - 1; k++)
            printf("*");
        printf("\n");
    }
```
***
# 2022-10-10 Monday(1)
* 6749 'Next in line' 문제
+ 등차 수열에 관한 문제이다.
+ n - 3, n, n + 3
***
# 2022-10-09 Sunday(1)
* 5522 '카드 게임' 문제
+ 오늘은 시간이 없어서 쉬운 문제 풀고 끝낸다.
***
# 2022-10-08 Saturday(1)
* 4999 '아!' 문제
+ char arr[1001] = {0,}; 을 하는 이유
    + 스택공간에 변수를 선언하면 쓰레기값이 들어간다.
    + 그래서 초기화를 해준다.
***
# 2022-10-07 Friday(1)
* 2743 '단어 길이 재기' 문제
+ 문자열의 길이를 정수를 바꾸는 함수가 기억이 나지 않았다.
```
#include <stdio.h>
#include <string.h>

int main() {
    char arr[101];
    int len;

    scanf("%s", &arr);
    
    printf("%d", strlen(arr));
    
    return 0;
}
```
***
# 2022-10-06 Thursday(1)
* 2441 '별 찍기 -4' 문제
+ 수업시간에 못 풀었던 별찍기를 풀었다.
+ 이해해서 한 것 보다는 이것저것 해보다가 맞췄다.
***
# 2022-10-05 Wednesday(2)
* 10039 '평균 점수' 문제
+ 문제 내용만 길 었을 뿐 그냥 평균 구하는 문제
***
# 2022-10-05 Wednesday(1)
* 23234 'The World Responds' 문제
+ The world says hello! 출력하는 문제이다
+ 문제가 영어로 되어있었지만 이해는 할 수 있었다.
***
# 2022-10-04 Tuesday(1)
* 5337 '웰컴' 문제
+ 특수문자 출력하는 문제
***
# 2022-10-03 Monday(1)
* 1373 '2진수 8진수' 문제
+ 10단위로 끝어서 계산하는것은 생각했는데 3자리씩 어떻게 끊을지를 몰랐다.
***
# 2022-10-02 Sanday(1)
* 5596 '시험 점수' 문제
+ 함수를 만들어서 하는게 재미있다.
+ 반복 문을 써서 하면 더 코드가 줄어들것 같은데 잘 떠오르지 않는다.
***
# 2022-10-01 Saturday(1)
* 2609 '최대공약수와 최소공배수' 문제
+ 오랜만에 스스로 푼 문제중에 머리를 쓴 문제이다.
+ 민망하다.
+ 다른 사람들은 main안에서 끝냈는데 나는 따로 함수를 만들어서 풀었다.
```
int GCM(int a, int b) {
    if (a >= b) {
        while (1) {
            if (a % b == 0) 
                return b;
            else
                return GCM(a %= b, b);
        }
    }
    else {
        while (1) {
            if (b % a == 0)
                return a;
            else
                return GCM(a, b %= a);
        }
    }
}
```
```
LCM = a * b / GCM(a, b);
```
***
# 2022-09-30 Friday(1)
* 2440 '별 찍기 - 3' 문제
+ 이 문제는 얼마전에 수업시간에 별찍기를 실습했던 문제이다.
+ 실습했던 문제를 응용해서 빈칸 띄우기 문제가 있었는데 못 풀었다. 속으로 정말 민망했다.
***
# 2022-09-29 Thursday(1)
* 5339 '콜센터' 문제
+ 특수문자 출력하는 아주 쉬운 문제였다.
+ 오늘은 새로운 노트북 세팅 하느라 시간이 없어 쉬운 문제 풀고 끝낸다.
# 2022-09-28 Wednesday(1)
* 4101 '크냐?' 문제
+ 오늘은 시간이 없어서 쉬운문제를 풀었다.
+ 삼항연산자와 do while 문을 이용해서 문제를 풀었다.
```
do {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0)
            break;
        c = a > b? printf("Yes\n") : printf("No\n");
    } while (a > 0 && b > 0);
```
***
# 2022-09-27 Tuesday(1)
* 25501 '재귀의 귀재' 문제
+ 이 문제는 특이하게 코드 힌트를 줬다.
+ 하지만 난 이해하지 못했다.
+ [코드참고](https://dohyeon0709.github.io/boj/BJ25501/)
***
# 2022-09-26 Monday(1)
* 18870 '좌표 압축' 문제
+ 2 4 -10 4 -9 -> 2보다 작은 숫자 -9,-10 -> 2, -10보다 작은수 0
+ 출력 2 3 0 3 1

+ 문제는 이해되었는데 구현이 쉽지 않다.
+ c++에 사용하는 unique 함수를 이해하고 이진 탐색등을 통해서 빅오를 줄여야 한다.
+ 이건 지금 나의 레벨에서 풀수 없는 문제인것 같다.
+ [코드참고](https://codinghejow.tistory.com/34)
***
# 2022-09-25 Sunday(1)
* 1018 '체스판 다시 칠하기' 문제
+ 처음에 문제를 이해하지 못했지만 여러 설명을 보고 이해하였다.
+ 삼항연산자를 처음 쓴것 같다.
```
#define minFinder(a , b) a < b ? a : b
    min = minFinder(min, black);
    min = minFinder(min, white);

    printf("%d\n", min);
```
+ for문이 4번 사용하고 경우의 수도 있다보니 복잡하다.
[코드참고](https://mjeong9316.tistory.com/167)
***
# 2022-09-24 Saturday(1)
* 10814 '나이순 정렬' 문제
+ 구조체 배열의 인덱스를 활용하여 메모리를 절약하였다.
+ [코드참고](https://kyr-db.tistory.com/43)
***
# 2022-09-23 Friday(1)
* 9012 '괄호' 문제
+ 괄호 문제이길래 처음에는 스택을 써야 한다고 생각했는데 다른 분들 코드 보니 스택없이 풀었길래 나도 그 방법을 따라 풀었다.
+ [코드참고](https://531522szerodesire.tistory.com/71)
***
# 2022-09-22 Thursday(2)
* 1181 '단어 정렬' 문제
+ 문자열과 문자열의 길이를 구조체 배열로 저장해주고, Quick Sort를 사용해 길이에 따라 오름차순으로 정렬했다.
+ 길이가 같을 때는 strcmp()로 문자열을 비교해 문자열이 크고 작은지에 따라 정렬하였다.
+ 문자열을 비교해 동일한 문자열을 가지는 구조체가 없을때만 출력해준다.
+ [코드참고](https://kyr-db.tistory.com/56)
    1. gets는 개행문자를 받아와서 널문자로 변환하므로 버퍼에 있는 개행문자를 받아온다.
    2. scanf의 공백은 버퍼에서 공백 및 개행문자를 받아온다.
    3. puts는 문자열 하나를 출력할 때마다 개행문자를 자동으로 같이 출력해준다.
***
# 2022-09-22 Thursday(1)
* 11651 '좌표 정렬하기 2' 문제
+ 11650 문제에서는 x값을 기준으로 했으나 이번에는 y값을 기준으로 하면되는 문제여서 예전 코드를 참고하여 쉽게 풀었다.
+ [코드참고](https://velog.io/@kimmainsain/C%EC%96%B8%EC%96%B4-%EB%B0%B1%EC%A4%80-11650-%EC%A2%8C%ED%91%9C-%EC%A0%95%EB%A0%AC%ED%95%98%EA%B8%B0)
***
# 2022-09-21 Wednesday(1)
* 1874 '스택 수열' 문제
+ 문제는 완벽하게 이해했는데 코드로 표현할수가 없었다.
+ 잘못된 코드를 참고해서 많이 틀렸다.
+ 스택 구현 방법을 알았다면 풀 수 있을것 같다.
***
# 2022-09-20 Tuesday(1)
* 11650 '좌표 정렬하기' 문제
+ 구조체를 선언해서 compare함수 안에 두개의 배열을 오름차순으로 정렬 할 수있었다.
+ 구조체 쓰는 것에 대한 두렵을 없애야 할것 같다.
+ [코드참고](https://velog.io/@kimmainsain/C%EC%96%B8%EC%96%B4-%EB%B0%B1%EC%A4%80-11650-%EC%A2%8C%ED%91%9C-%EC%A0%95%EB%A0%AC%ED%95%98%EA%B8%B0)
***
# 2022-09-19 Monday(1)
* 11050 '이항계수'
+ 이항계수가 기억이 나지 않아 공식을 참고 하였다.
+ 팩토리얼 함수가 핵심이였다.
<img src="https://postfiles.pstatic.net/MjAyMjA0MTVfMTcy/MDAxNjUwMDI4MzQxOTYz.hF-q8a0NxDnBn3e_eekMN4LoNzUajSmNzzyIe7PzDZIg.cpZBLZQV_Kh2erR7gDCBvc5q15u6ZjI7RHQ1oW-287Ag.PNG.jhp1276/image.png?type=w966" width = "800" height = "200"/>

```
int factorial(int num) {
    int result = 1;

    for (int i = 1; i <= num; i++) {
        result = result * i;
    }

    return result;
}
```
***
# 2022-09-18 Sunday(2)
* 4153 '직각삼각형' 문제
+ 처음에는 int를 사용했는데 입력값이 너무 커서 오버플로우가 발생하여 자료형을 long로 해주었다.
+ 피타고라스 모든 변을 생각하지않고 한 가지 경우만 생각해서 조건문을 만들어서 틀렸다.
+ 처음에는 pow, sqrt를 적용해서 풀었다.
*** 
# 2022-09-18 Sunday(1)
* 1427 '소트인사이드' 문제
+ 왜 답지 부터 먼저 볼 생각하는지 ㅠㅠ
+ gets와 puts를 사용해보았다.
```
#include <string.h>
char N[11] = {0,};  // 최대가 1,000,000,000이므로, 문자열의 크기를 11로 잡았다.
gets(N);    //입력을 공백 없이 한줄로 받기 위해서 사용
puts(N);    //정렬된 수 출력
```
# 2022-09-17 Saturday(3)
* 1085 '직사각형에서 탈출' 문제
+ 함수를 선언해서 문제를 풀어보았다.
+ 최적화 되지 않은 코드지만 함수를 활용해서 문제를 풀었다니 활용 범위가 넓어진것 같다.
***
# 2022-09-17 Saturday(2)
* 2108 '통계학' 문제
+ 산술평균, 중앙값, 범위는 알겠는데 최빈값을 모르겠다.
+ [코드참고](https://sedangdang.tistory.com/19)
+ malloc 대신 colloc를 사용했다.
+ malloc은 쓰레기값이 들어가고 colloc는 0이 들어간다.
+ 마무리로 free(arr)를 사용해서 할당받은것을 반납했다.
***
# 2022-09-17 Saturday(1)
* 10828 '스택' 문제
+ 자료구조 시간에 배웠던 스택을 구현할려니 기억이 나지 않았다.
+ 자주 쓸 것 같으니 기억해두자
```
void push(int push_data) {
    stack[stack_size] = push_data;
    stack_size += 1;
}

int pop() {
    if (empty()) {
        return -1;
    }
    stack_size -= 1;
    return stack[stack_size];
}

if (!strcmp(command, "push")) {
    scanf("%d", &push_data);
    push(push_data);
}

else if (!strcmp(command, "pop")) {
    printf("%d\n", pop());
}      
```
***
# 2022-09-16 Friday(2)
* 10989 '수 정렬하기3' 문제
+ 메모리 제한이 8MB 이므로 카운팅 정렬(==계수정렬) 사용해서 문제를 풀 수 있었다.
+ 처음에 원리를 보고 이해하지 못했다. 하지만 계속 보다보니 알게되었지만 역시 코드로 나타내는것은 못했다.
* **이 코드가 핵심 코드다.**
```
for (i = 0; i < N; i++) {
        scanf("%d", &num);
        counting[num]++;
    }
```
***
# 2022-09-16 Friday(1)
* 2751 '수 정렬하기2' 문제
+ O(nlogn)문제여서 퀵정렬을 가지고 문제를 풀었다.
+ 이번 문제는 처음보는 코드가 많았다.
```
int compare(const void *a, const void *b) { // 오름차순 비교 구현
    int num1 = *(int *)a;   // void 포인터를 int 포인터로 변환한 뒤 역참조 하여 값을 가져옴
    int num2 = *(int *)b;

    if (num1 < num2)    
        return -1;
    if (num1 > num2)
        return 1;
    return 0;       // a와 b가 같을 때는 0 반환
}
```
+ 퀵정렬 함수가 stdlib.h 헤더파일에 있음
```
qsort(num, n, sizeof(int), compare);
// 정렬할 배열, 요소 개수, 요소크기, 비교 함수를 넣어줌
```
+ 배열 크기 구하기 이제는 어디에서 사용해야할지 알것 같다.
```
int *num;   //배열 크기 구하기
num = (int *)malloc(sizeof(int)*n); // 배열 크기 구하기
```
***
# 2022-09-15 Thursday(1)
* 9020 '골드바흐의 추측' 문제
+ 할수있을것 같으면서 못하겠다
+ [코드참고](https://travelerfootprint.tistory.com/51)
+ goto문을 처음 사용 해봤다. 이중반복문을 바로 빠져나올 때 사용했다.
***
# 2022-09-14 Wednesday(1)
* 25305 '커트라인' 문제
+ 삽입정렬 내림차순으로 해서 문제를 풀었다.
+ 배열 크기 선언을 malloc를 해서 풀었다.
```
void insertSort(int num,int *arr) {
    int i, j, key;

    for (i = 1; i < num; i++) {
        key = arr[i];

        for (j = i - 1; j >= 0 && arr[j] < key; j--) {
            arr[j + 1] = arr[j];    // 한 칸 뒤로 이동
        }
        arr[j + 1] = key;   //알맞은 위치에 key삽입
    }
}
```
```
int *arr;
arr = (int *)malloc(sizeof(int)*N); // 그 길이에 맞춘 배열 생성
```
***
# 2022-09-13 Tuesday(1)
* 4948 '베르트랑 공준' 문제
+ 앞에 풀었던 1929 소수 구하기 비슷했다.
+ 그래서 코드를 거의 재사용하였다.
+ 한줄입력하고 출력하고 끝나는게 아니라 0이 입력 될때 까지 하는 문제였다
+ 소수 문제 계속 해도 어렵지만 조금은 이해되는것 같다.
***
# 2022-09-12 Monday(1)
* 1929 '소수 구하기' 문제
+ 처음에 %i를 사용해서 풀었으나 빅O값이 커서 시간초과되었다.
+ 문제는 에라토스테네의 체 알고리즘을 이용해서 푸는 문제였다.
+ 하지만 어떻게 접근하는지 몰라 남의 것을 참고하였다.
+ 배열을 전역으로 선언하면 스택에 저장되지 않고 힙에 저장되어 크기에 대한 제약에서 자유롭다
+ [코드참고](https://travelerfootprint.tistory.com/49)
***
# 2022-09-11 Sunday(2)
* 11653 '소인수분해' 문제
+ 소인수 구하는 공식은 기억하고 있으면 좋을것 같다.
```
for (int i = 2; i <= N; i++) {
		while (N % i == 0) {
			N /= i;
			printf("%d\n", i); 
} }
```
***
# 2022-09-11 Sunday(1)
* 2750 '수 정렬하기' 문제
+ 버블 정렬로 풀었다.
```
for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (arr[j + 1] < arr[j]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
} } }
```
***
# 2022-09-10 Saturday(2)
* 2742 "기찍 N' 문제
+ 2741문제 반대로 하면 되는거라서 쉬웠다.
***
# 2022-09-10 Saturday(1)
* 2741 'N 찍기' 문제
+ 너무 쉬워서 노코멘트
******
# 2022-09-09 Friday(3)
* 2577 '숫자의 개수' 문제
+ 반복문 횟수 정하기 위해서 문자열 길이를 구할려고 itoa를 사용했다. (정수 ->> 문자열)
+ 하지만 itoa는  표준 함수가 아니며, 일부 C 구현체에만 지원합니다.
+ 그래서 itoa를 대신해서 sprintf를 사용하였다.
+ <span style="color:red">핵심 코드</span>
```
for (int i = 0; i < length; i++) {
		temp = mul % 10;
		arr[temp]++;
		mul /= 10;
	}
```
***
# 2022-09-09 Friday(2)
* 2475 '검증수' 문제
+ 문제에서 힌트를 다 줘서 쉽게 풀었다.
+ 옛날 같았으면 지저분하게 코딩했을것 같은데 옛날과 비교했을 때 많이 발전한것 같다.
***
# 2022-09-09 Friday(1)
* 2920 '음계' 문제
+ 배열을 3개 사용해서 풀었다. 내가 보기에는 배열 한개만 있어도 풀 수 있을것 같다.
*******
# 2022-09-08 Thursday(1)
* 2581 '소수' 문제
+ 1. for 문에 범위 설정
+ 2. 소수라면 sum변수에 그 값을 더하며, 소수일 때 sum값이 0이라면 최초의 소수이므로 min변수에 그 값을 저장합니다.
+ 3. 소수의 합 sum과 최솟값 min을 출력하고, 소수가 없을 경우에는 -1을 출력
***
# 2022-09-07 Wednesday(1)
* 1978 '소수 찾기' 문제
+ 플래그 개념을 이용해서 소수일때 카운터 해서 풀었다.
+ 다음에는 에라토스테네스의 체 방법으로 풀어보고 싶다.
*********
# 2022-09-06 Tuesday(1)
* 10757 '큰 수 A + B' 문제
+ [코드설명](https://abcdefgh123123.tistory.com/194)
+ 처음에는 unsigned long long int로 해서 풀었다. 하지만 틀렸다.
+ 그대로 카피해서 넘어갔다. 이건 진짜 내머리로는 풀기 힘들것 같다.
******
# 2022-09-05 Monday(1)
* 2839 '설탕 배달' 문제
+ 진짜 수학 사고력의 중요성을 느낀다. 수학 사고력 올릴수있는 책을 좀 봐야겠다.
*********
# 2022-09-04 Sunday(3)
* 2775 '부녀회장이 될테야' 문제
+ 문제 이해도 못했고, 코드르 봐도 모르겠다. 언젠가는 이해하는 날이 오겠지
+ [코드설명](https://eggcoffee.tistory.com/4)
*******
# 2022-09-04 Sunday(2)
* 10250 'ACM 호텔' 문제
+ 처음에는 어렵게 해서 풀었는데 틀렸다고 한다. 출력형식이 잘못된것같다.
  그래서 다른 사람거 참고하니 %d%02d\n 이렇게 작성했다.
  다른 사람의 의션은 숫자만 맞게 인식을 시킨 것 같다고 한다.
```
if (room % height == 0)
    printf("%d%02d\n", height, room / height);

else
    printf("%d%02d\n", room % height, room / height + 1);
```
*******
# 2022-09-04 Sunday(1)
* 2869 '달팽이는 올라가고 싶다' 문제
+ 처음에는 반복문으로 하였으나 처리 속도가 느려서 나누기 방법을 참고하여 풀었다.
```
	day = climb - down;

	almost = height - climb;	// 이 거리까지 오면 다음날 달팽이는 도착

	if (almost % day)	// almost의 거리까지 가는데 걸리는 시간을 구할때 정수값이 안나오면 하루 더 추가
		howmany = (almost / day) + 1;
	else
		howmany = almost / day;

	dday = howmany + 1;	// 정상에 도달할려면 하루가 더 걸린다.
```
*******
# 2022-09-03 Saturday(2)
* 1193 '분수찾기' 문제
+ 수학적 사고력이 너무 떨어지는것 같다.
+ [코드설명](https://abcdefgh123123.tistory.com/186)
```
if (k % 2 != 0) {   //홀수일때
    a = k * (k + 1) / 2;
    printf("%d", a - input + 1);
    printf("/");
    printf("%d", k - (a - input)); 
}
else {          //짝수일때
    a = k * (k + 1) / 2;
    printf("%d", k - (a - input));
    printf("/");
    printf("%d", a - input + 1);
}
```
*******
# 2022-09-03 Saturday(1)
* 2292 '벌집' 문제
+ 6의 배수를 확인하고, 집 1개는 따로 처리해줘야한다.
*******
# 2022-09-02 Friday(1)
* 1712 '손익분기점' 문제
+ 식을 정리하지 않았을때는 처리 시간이 많이 걸렸는데 정리하고나서는 빨리되었음
```
x = a / (c - b) + 1;	// a + b * x < c * x 정리한거
```
# 2022-09-01 Thursday(1)
* 10872 '팩토리얼' 문제
+ 재귀함수를 이용해서 팩토리얼 구현
```
return n * factorial(n - 1);
```
******
# 2022-08-31 Wednesday(1)
* 10870 '피보나치 수 5' 문제
+ 재귀함수를 이용해서 피보나치를 풀었다.
```
if(n == 0) return 0;
	else if(n == 1) return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
```
********
# 2022-08-30 Tuseday(2)
* 1316 '그룹 단어 체커' 문제
+ 솔직히 못 풀었다. 그대로 카피함 ㅠㅠ 이런 조건 도저히 생각해내지 못함
```
if(alpabet[str[j] - 'a'] == 0 || j - alpabet[str[j] - 'a'] < 2) {
				if(str[0] == str[j] && j - alpabet[str[j] - 'a'] > 1)
					break;
				alpabet[str[j]  - 'a'] = j;
			}
			// 알파벳이 연속되는지 확인
			else if(j - alpabet[str[j] - 'a'] > 1)
				break;
			//알파벳이 연속되지 않았을 때 break
			if(str[j] == '\0') {
				count++;
				break;
			}
```

# 2022-08-30 Tuesday(1)
* 2941 '크로아티아 알파벳' 문제
+ 나는 하나하나 조건을 다 주어서 풀었다.
``` 
else if(str[i] == 'd')
			if(str[i + 1] == 'z') 
				if(str[i + 2] == '=')
					count++;
```
# 2022-08-29 Monday(1)
* 5622 '다이얼' 문제
+ strchr 문자열 내에 일치하는 문자가 있는지 검사하는 함수입니다.
<img src="https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=http%3A%2F%2Fcfile8.uf.tistory.com%2Fimage%2F9903603C5E0A25F30C6DD6" width = "900" height = "400"/>
**********

# 2022-08-28 Sunday(3)
* 2908 '상수' 문제
+ atoi사용 stdlib.h 헤더 파일 사용해야함 
**********
# 2022-08-28 Sunday(2)
* 1152 '단어의 개수' 문제
+ fgets( , ,)은 문자열을 가져오는 함수이다.
+ (char, sizeof, *입력스트림)
```
    fgets(a,sizeof(a),stdin);
```
*********
# 2022-08-28 Sunday(1)
* 1157 '단어 공부' 문제
+ 소문자를 대문자로 고쳐주는 코드
```
if(alphabet[i] >= 97 && alphabet[i] <= 122)
    alphabet[i] -= 32; 
```
********
# 2022-08-27 Saturday(3)
* 2675 '문자열 반복' 문제
+ 1) AAABBBCCC		' != 2) 'AAABBBCCC' 와 다르다.
+ 1번째는 배열 끝까지 널 값이 들어간 것이고, 2번째는 문자열 크기만큼 들어감.
*********
# 2022-08-27 Saturday(2)
* 10809 '알파벳 찾기' 문제
+ alphabet[j]가 97(ASCII >> 'a'), 'a' == 97이다. 서로 빼면 arr[0]가 된다. arr[0]에는 문자형의 첫번째가 저장된다.
```
arr[alphabet[j] - 'a'] = j;
```
********
# 2022-08-27 Saturday
* 11720 '숫자의 합' 문제
+ 문자형을 정수형을 바꿔주는 atoi 함수를 알게 되었다.
+ %c에는 ' '를 사용하고 %s에는 " "를 사용한다.
```
int a, b;
char a_str[20], b_str[20];

a = atoi(a_str);
b = atoi(b_str);
```
**********
* 1065 '한수' 문제
+ 각 자리수들이 등차수열을 이루는 수가 몇개인지 구하기
+ [한수 설명](https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=occidere&logNo=220790000403)
+ 내용을 이해하는데 참고하였음
*******
* 11654 'ASCII CODE' 문제
+ 참고하기
```
char ASCII;
	scanf("%c", &ASCII);
	printf("%d", ASCII);
```
*******
* 4673 '셀프 넘버' 문제
+ 예를 들어, d(75) = 75+7+5 = 87이다.
+ 이건 혼자 못풀겠다. 아직 실력이 부족하다.
이 식을 어떻게 아는거지?
```
do {
		sum = sum + (i % 10);
		i = i / 10;
	} while(i != 0);    // 몫이 0이 될 때까지 반복
```
*******
# 2022-08-26 Friday
* 4344 '평균은 넘겠지' 문제
+ <span style="background-color: #fff5b1"> 평균을 구하는 함수형을 참고해서 문제를 풀었다. </span>
```
double avg(int scores[], int student);
```
*******
* 8958 OX 퀴즈 문제
+ 배열의 끝을 조건으로 쓰는 방법
```
for(int j = 0; quiz[j] != '\0'; j++)
```
*********
* 1546 평균 배열 문제
+ 최댓값 구하는 공식
```
if(arr[i] > max)
            max = arr[i];
```
+ double형으로 하니까 값이 나옴
  자료형 일치 시켜주기
```
sum[i] = (arr[i] / (double)max) * 100;
```
*******
# 2022-08-25 목요일
* 3052 배열 나머지 문제
+ 서로 같고 다르고를 나누는 코드를 보았지만 이해하지 못함
```
for(i = 0; i < 9; i++) {
		for(j = i + 1; j < 10; j++)
			if(arr[i] == arr[j]) {
                break; // 서로 같은 수일 경우
            }
            if( j == 10 ) 
                count++; // 서로 같은 수가 없는 경우
	}
```
********

# 2022-08-23 수요일
* 1110 더하기 사이클 문제
+ 나는 배열을 이용해서 접근 할려고 했으나 잘 안되서 다른사람들의 코드를 참고하였다.
```
do{
        compare = (compare % 10) * 10 + (compare / 10 + compare % 10) % 10;
        again++;
    } while(compare != num);
```
<span style="background-color: #fff5b1">다들 이런 공식을 어떻게 떠올리는거야? 대단하다</span>

********
* 15596 정수 N개의 합
+ 함수를 이용해서 푸는 문제이다.
  아래 코드를 참고
```
#include <stdio.h>

long long sum(int *a, int n) {
    long long re = 0;
    
    for(int i = 0; i < n; i++)
        re += a[i];
    return re;
}
```
<img src="https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=https%3A%2F%2Fblog.kakaocdn.net%2Fdn%2FmrOgV%2Fbtrp66nbPkN%2F0qnVvtTNRMvok00QuQKZP1%2Fimg.png" width = "400" height = "400"/>

**********
# 2022-08-22 화요일
* 10818 최솟값 최댓값 구하는 문제
+ arr의 범위를 -1000000 <= a <= 1000000 으로 하기 위해서
아래 코드 처럼 표현하였다.
```
if(arr > max) { //max = -1000001
            max = arr;
        }

        if(arr < min) { //min = 1000001
            min = arr;
        }    
```
********
* 10951번 EOF 문제
+ EOF는 C언어에서는 -1로 정의되어 있지만, 프로그램을 실행하면 ctrl+Z (실행취소 단축키)로 값이 정해져 있습니다.

+ 반복문 탈출하기 위해서 사용한다.
```
while (scanf("%d %d", &a, &b) != EOF)
```
*******
* 4740 거울 오! 거울 물젠
```
    scanf(" %[^\n]", text);
```
한줄입력받기
scanf("%[^\n]\n", s);
이 입력은 모두 한줄을 전체로 입력 받을 수 있다.
%[^\n]\n의 뜻

%[...]은 이 대괄호 안에있는 문자만 입력을 받겠다는 뜻인데
%[^...]은 대괄호 안에있는문자만 빼고 입력을 받겠다는뜻이다.

그러니까 %[^\n]\n은 
개행문자 \n만빼고 문자의 입력을 받고, 
그뒤에 \n을 붙여서 입력받은 문자열 모두를 한줄에 입력받고 
뒤에 \n만 붙여서 여러값을 입력받아 한줄에 출력하고 개행문자를 넣는다는의미다.

줄바꿈도 입력을 받는지 확인하고 문제를풀어야할 경우가많은데 이때 유용한 포맷이다.
이 포맷의 단점은 줄바꿈을 입력받지 않기때문에 빈줄을 입력받을수없고,
공백으로 시작하는경우 공백을 무시하고 문자부터 입력받게된다.
*******
* 25304 영수증 문제
    변수 선언을하고 초기화 하지 않아 문제를 틀렸다.
    초기화 하는 이유는 할당받은 메모리 공간에 의미 없는 쓰레기 값이 저장되어 있으며 오류가 발생하기 때문에 초기화를 해준다.
********
* 2744 대소문자 바꾸기
    처음 생각은 아스키 코드를 이용하는 방법을 생각해서 풀었다

    하지만 strupr함수를 이용하면 대소문자를 쉽게 변환할수 있다.
    아래 코드는 정답은 아니지만 이런것도 있다는것을 알게 되었다.
```
    #include <string.h>

    strupr(a);
    printf("%s\n", a);

    strlwr(a);
    printf("%s\n", a);
```
*********
# 2022-08-21 일요일
* 2480 주사위 3개 문제
    다른 사람들은 3개의 숫자를 비교 할때 아래 코드 처럼 쓰는 사람을 보았다.
    ```
    if(a > b && c)
        sum = a;
    ```
    if(a > b && c) 나는 아직 이 뜻을 이해 하지 못했다.
    **********
# 2022-08-19-금요일
+  2525 오븐 문제
    여러 변수를 고려했던 문제 였다
    24시를 넘어가면 어떻게 되는지
    120분을 더하면 어떻게 되는지 등등 여러 변수를 확인했다.

+ 정답이었던 코드를 실행시키면 컴퓨터가 멈춘다 왜 그런걸까? oom이라는 에러가 뜬다 ㅠㅠ
**********
+ 2884 알람시계 문제
    기존 알람 보다 45분 일찍 울리는 알람시계 만들기
    ```
    if((0 <= H && H <= 23) && (0 <= M && M <= 59)){    
        if(M >= 45){
            printf("%d %d", H, M - 45);
        }
        else {  // M < 45
            if(H - 1 < 0)   // +23 해주는 이유는 오전 0시 에서 -1을 하면 -1시가 되는것을 막기 위해서
                printf("%d %d", H + 23, M + 15);
            else
                printf("%d %d", H - 1, M + 15);
        }
    }
    else return 0;   // 입력 에러
    ```
    시간이 음수 되는것을 고려하여 코드를 작성함
    *********
# 2022-08-18 목요일
+ 2753 윤년 문제
    ``` 
    if(year % 4 == 0){              // 1단계
        if(year % 100 == 0) {       // 2단계
            if(year % 400 == 0){    // 3단계
                printf("1");        // 최종 윤년
            }
            else
                printf("0");        // 3단계 윤년 아님
        }
        else
            printf("1");            // 2단계 윤년
    }
    else 
        printf("0");                // 1단계 윤년 아님
    ```
    윤년을 정하는 단계가 있다는것을 알게 되었다.
   *********
+ 2588 문제
    [백준 2588번 문제](https://www.acmicpc.net/problem/2588, "2588 link")
    ```
    add[i] = (a[0] * 100 * b[i]) + (a[1] * 10 * b[i]) + (a[2] * b[i]);
    ```
    배열을 선언하고 각 자리수를 곱 해주었다.
     *************** 
+ 10172 특수 문자로 개 이모티콘 만드는 문제  
    |\_/|  
    |q p|   /}  
    ( 0 )"""\  
    |"^"`    |  
    ||_/=\\__|  

    처음에는 ' , " , \ 가 출력이 안되서 자료를 찾아 보았다.
    \' , \", \\ 사용함
 ******************
# 2022-08-17 수요일
+ 3003 문제
    체스는 총 16개의 피스를 사용하며, 킹 1개, 퀸 1개, 룩 2개, 비숍 2개, 나이트 2개, 폰 8개로 구성되어 있다.
    순서대로 가지고 있는 수를 넣으면 몇개가 부족하고, 초과하는지 알 수있는 프로그램을 만드는 것이다.

    ex) king - x = 1 -> x = 1 - king으로 문제를 풀었다.
    ```
    printf("%d %d %d %d %d %d", 1 - (king), 1 - (queen), 2 - (rook), 2 - (bishop), 2 - (knight), 8 - (pawn));
    ```
*******
# 2022-08-16 화요일
+ 10926 문제
    특수문자 한번에 출력이 안되서 끊어서 표현했다.
    ```
    printf("??!");
    ```
    // >>>
    ```
    printf("?");
    printf("?");
    printf("!");
    ```
