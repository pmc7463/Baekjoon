#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int test;
	float weight;
	char unit[3];

	scanf("%d", &test);

	for (int i = 0; i < test; i++) {
		scanf("%f %s", &weight, unit);

		//printf("%c\n", unit[0]);

		if (unit[0] == 'k') {	// 킬로그램
			printf("%.4f lb\n", weight * 2.2046);
		}
		else if (unit[0] == 'g') {	// 갤런
			printf("%.4f l\n", weight * 3.7854);
		}
		else if (unit[0] == 'l' && unit[1] == 'b') {	// 파운드
			printf("%.4f kg\n", weight * 0.4536);
		}
		else if (unit[0] == 'l') {	// 리터
			printf("%.4f g\n", weight * 0.2642);
		}

	}

	return 0;
}