#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float temperature = 0;
	float temp = 0;
	int cnt = 0;

	while (1) {
		scanf("%f", &temperature);
		if (temperature == 999) {
			break;
		}
		else {
			if (cnt == 0) {
				temp = temperature;
			}
			else {
				printf("%.2f\n", temperature - temp);
				temp = temperature;
			}
		}
		cnt++;
	}
	return 0;
}