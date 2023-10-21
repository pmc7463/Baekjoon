#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char MBTI[5];
	char type[5];
	int test;
	int cnt = 0;

	scanf("%s", MBTI);
	scanf("%d", &test);

	for (int i = 0; i < test; i++) {
		scanf("%s", type);
		//printf("출력 확인 %s\n", type);
		if (MBTI[0] == type[0]&& MBTI[1] == type[1]&& MBTI[2] == type[2]&& MBTI[3] == type[3])
			cnt++;
	}

	printf("%d", cnt);

	return 0;
}