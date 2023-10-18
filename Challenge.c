#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int f;
	int check = 0;

	scanf("%d", &f);
	f -= 1;

	while (1) {
		if (check * check + check == f)
			break;
		check++;
	}
	
	printf("%d", check);

	return 0;
}