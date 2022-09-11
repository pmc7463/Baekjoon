#include <stdio.h>

int main() {
	int N, temp;
	int arr[1000] = { 0 };

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (arr[j + 1] < arr[j]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}