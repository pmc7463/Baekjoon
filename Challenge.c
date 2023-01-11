#include <stdio.h>

int main() {
	int testcase, cnt = 0, tea[5];

	scanf("%d", &testcase);

	for (int i = 0; i < 5; i++) {
		scanf("%d", &tea[i]);
	}

	for (int i = 0; i < 5; i++) {
		if (testcase == tea[i])
			cnt++;
	}

	printf("%d\n", cnt);
	
	return 0;
}