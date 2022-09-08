#include <stdio.h>

int main() {
	int M, N, i, j, min, flags;
	int sum = 0;

	scanf("%d", &M);
	scanf("%d", &N);

	for (i = M; i < N; i++) {
		flags = 0;

		if (i == 1) 
			continue;
		for (j = 2; j < i; j++)
			if (i % j == 0)
				flags = 1;
				
		if (flags == 0) {
			if (sum == 0)
				min = i;	// 최초 소수 저장 그 이후로는 실행 X
			sum += i;
		}
	}

	if (sum == 0)
		printf("-1\n");
	else
		printf("%d\n%d\n", sum, min);

	return 0;
}