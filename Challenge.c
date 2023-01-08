#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int repetion, lookA, lookB;
	long long supervisor = 0;

	scanf("%d", &repetion);

	int* student = malloc(sizeof(int) * repetion);

	for (int i = 0; i < repetion; i++) {
		scanf("%d", &student[i]);
	}

	scanf("%d %d", &lookA, &lookB);

	for (int i = 0; i < repetion; i++) {
		supervisor += 1;
		student[i] -= lookA;

		if (student[i] > 0) {
			supervisor += ceil(student[i] * 1.0 / lookB);
		}
	}

	printf("%lld\n", supervisor);

	free(student);

	return 0;
}