#include <stdio.h>

int main() {
	int rectangle[101][101] = {0,};
	int cnt = 0;
	int x1, y1, x2, y2;

	for (int i = 0; i < 4; i++) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (int j = x1; j < x2; j++) {
			for (int k = y1; k < y2; k++) {
				rectangle[j][k] = 1;
			}
		}
	}

	for (int i = 1; i < 101; i++) {
		for (int j = 1; j < 101; j++) {
			if (rectangle[i][j] == 1)
				cnt++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}