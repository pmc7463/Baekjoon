#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char str[51];
	char save[51];
	int test;

	scanf("%d", &test);

	for (int t = 0; t < test; t++) {

		scanf("%s", str);

		size_t length = strlen(str);

		for (int i = 0; i < length; i++) {			
			if (str[i] == 90)
				save[i] = str[i] - 25;
			else
				save[i] = str[i] + 1;
		}
		printf("String #%d\n", t + 1);

		for (int j = 0; j < length; j++) {
			printf("%c", save[j]);
		}
		printf("\n\n");
	}
	return 0;
}