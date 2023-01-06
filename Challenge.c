#include <stdio.h>

int main() {
	char white[9][9];
	int cnt = 0;

	for (int i = 0; i < 8; i++) {
		scanf("%s", white[i]);
	}

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0 && white[i][j] == 'F')
				cnt++;
		}
	}

	// for (int i = 0; i < 8; i++) {
	// 	for (int j = 0; j < 8; j++) {
	// 		printf("%c", white[i][j]);
	// 	}
	// 	printf("\n");
	// }

	printf("%d", cnt);

	return 0;
}