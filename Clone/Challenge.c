#include <stdio.h>

int main() {
	int height, climb, down;
	int day, almost, howmany, dday;

	scanf("%d %d %d", &climb, &down, &height);

	if (climb == height) {
		printf("1");
		return 0;
	}

	day = climb - down;

	almost = height - climb;	// 이 거리까지 오면 다음날 달팽이는 도착

	if (almost % day)	// almost의 거리까지 가는데 걸리는 시간을 구할때 정수값이 안나오면 하루 더 추가
		howmany = (almost / day) + 1;
	else
		howmany = almost / day;

	dday = howmany + 1;	// 정상에 도달할려면 하루가 더 걸린다.

	printf("%d", dday);
	
	return 0;
}