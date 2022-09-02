#include <stdio.h>

int main() {
	int a, b, c, x = 1;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(b >= c) {
		printf("-1");
		return 0;
	}

	x = a / (c - b) + 1;	// a + b * x < c * x 정리한거

	printf("%d", x);
	
	return 0;
}