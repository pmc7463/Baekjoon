#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int test;
	int N, d;
	float v, f, cost;
	int cnt = 0;
	float temp;

	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		cnt = 0;
		scanf("%d %d", &N, &d);

		for (int j = 0; j < N; j++) {
			scanf("%f %f %f", &v, &f, &cost);
			temp = v * (f / cost);
			if (d <= temp)
				cnt++;
		}
		printf("%d\n", cnt);
	}

	return 0;
}