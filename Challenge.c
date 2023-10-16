#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int sum[200];
	int arr[200][3];
	int test;
	int check;

	scanf("%d", &test);

	for (int i = 0; i < test; i++) {
		scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
	}

	for (int n = 0; n < 3; n++) {
		for (int j = 0; j < test; j++) {
			check = 0;
			for (int p = j + 1; p < test; p++) {
				if (arr[j][n] == arr[p][n]) {
					check = 1;
					arr[p][n] = 0;
				}
			}
			if (check) {
				arr[j][n] = 0;
			}
		}
	}

	for (int k = 0; k < test; k++) {
		sum[k] = arr[k][0] + arr[k][1] + arr[k][2];
		printf("%d\n", sum[k]);
	}

	return 0;
}