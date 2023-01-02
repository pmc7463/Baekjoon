#include <stdio.h>

int main(void) {
	int num1, num2;
	long long max = 0, min = 1000001;

	scanf("%d", &num1);

	for (int i = 0; i < num1; i++) {
		scanf("%d", &num2);

		if (num2 > max)
			max = num2;
		if (num2 < min)
			min = num2;
	}

	printf("%lld\n", max * min);

	return 0; 
}