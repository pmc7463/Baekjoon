#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	int result = 1;
	
	scanf("%s", str);

	for (int i = 0; i < strlen(str) / 2; i++) {
		if (str[i] != str[strlen(str) - 1 - i])
			result = 0;
	}

	if (result == 1)
		printf("1");
	else
		printf("0");

	return 0;
}