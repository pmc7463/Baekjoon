#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int na[3] = { 0,0,0 };
	int now[3] = {0, 0, 0};
	int time[3];
	int cnt = 0;
	scanf("%d:%d:%d", &now[0], &now[1], &now[2]);
	scanf("%d:%d:%d", &na[0], &na[1], &na[2]);

	for (int j = 0; j <= 2; j++) {
		if (now[j] == na[j])
			cnt++;
	}
	if (cnt == 3) {
		na[0] += 24;
	}

	for (int i = 2; i >= 0; i--) {
		if (na[i] - now[i] >= 0)
			time[i] = na[i] - now[i];
		else {
			if (i == 0) {
				time[0] = na[0] + 24 - now[0];
			}
			else {
				na[i - 1] = na[i - 1] - 1;
				time[i] = na[i] + 60 - now[i];
			}
		}
	}
	
	printf("%02d:%02d:%02d", time[0], time[1], time[2]);

	return 0;
}