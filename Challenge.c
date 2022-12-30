#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	char num1[8], num2[8];
	int min, max;

	scanf("%s %s", num1, num2);

	for (int i = 0; i < strlen(num1); i++) {
		if (num1[i] == '6') {
			num1[i] = '5';
		}
	}

	for (int i = 0; i < strlen(num2); i++) {
		if (num2[i] == '6') {
			num2[i] = '5';
		}
	}

	min = atoi(num1) + atoi(num2);

	for (int i = 0; i < strlen(num1); i++) {
		if (num1[i] == '5') {
			num1[i] = '6';
		}
	}

	for (int i = 0; i < strlen(num2); i++) {
		if (num2[i] == '5') {
			num2[i] = '6';
		}
	}

	max = atoi(num1) + atoi(num2);

	printf("%d %d\n", min, max);

	return 0; 
}