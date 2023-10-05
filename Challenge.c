#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<malloc.h>

int main() {

	int cnt = 0;
	int gameData[504][2]; 
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			for (int k = 1; k <= 9; k++) {
				if (i == j || i == k || j == k) {
					continue;
				}
				gameData[cnt][0] = i * 100 + j * 10 + k;
				gameData[cnt][1] = 0;
				cnt++;
			}
		}
	}

	int testCase = 0;
	scanf("%d", &testCase);
	int testData[100][3];
	for (int i = 0; i < testCase; i++) {
		scanf("%d", &testData[i][0]);
		scanf("%d", &testData[i][1]);
		scanf("%d", &testData[i][2]);
	}

	int strike;
	int ball;
	for (int i = 0; i < testCase; i++) {
		for (int j = 0; j < cnt; j++) {

			if (gameData[j][1] == 1) continue;
			strike = 0;
			ball = 0;

			// 3자리 숫자로 입력된 값들을 분리
			int d1 = gameData[j][0] / 100;
			int d2 = gameData[j][0] % 100 / 10 ;
			int d3 = gameData[j][0] % 10;
			int i1 = testData[i][0] / 100;
			int i2 = testData[i][0] % 100 / 10;
			int i3 = testData[i][0] % 10;

			if (d1 == i1 ) strike++;
			if (d2 == i2)  strike++;
			if (d3 == i3)  strike++;
			if (i1 == d2 || i1 == d3) ball++;
			if (i2 == d1 || i2 == d3) ball++;
			if (i3 == d2 || i3 == d1) ball++;

			if (!(testData[i][1] == strike && testData[i][2] == ball)) {
				gameData[j][1] = 1;
			}
		}
	}

	int result = 0;
	for (int i = 0; i < cnt; i++) {
		if (gameData[i][1] == 0) result++;
	}
	printf("%d\n", result);
	return 0;
}