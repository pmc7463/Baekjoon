#include <stdio.h>

int main() {
	int input;
	int k = 1, a = 0;

	scanf("%d", &input);

	while (1) {
		if((k - 1) * k / 2 < input && input <= k * (k + 1) / 2) {
			break;
		}
		k++;
	}

	if (k % 2 != 0) {
		a = k * (k + 1) / 2;
		printf("%d", a - input + 1);
		printf("/");
		printf("%d", k - (a - input)); 
	}
	else {
		a = k * (k + 1) / 2;
		printf("%d", k - (a - input));
		printf("/");
		printf("%d", a - input + 1);
	}

	return 0;
}