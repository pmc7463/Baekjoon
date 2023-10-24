#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int day;
	int eat;
	int test;

	scanf("%d", &test);

	for (int i = 0; i < test; i++) {
		scanf("%d %d", &day, &eat);

		if ((day % eat) > 0 && (day % eat) < eat)
			printf("%d\n", day / eat + 1);

		else
			printf("%d\n", day / eat);
	}

	return 0;
}