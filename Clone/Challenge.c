#include <stdio.h>

int main() {
	int number[4] = {0};
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &number[i]);
	}

	for (int i = 0; i < 5; i++) {
		sum += number[i] * number[i];
	}

	sum %= 10;	
	
	printf("%d", sum);
	
	return 0;
}