#include <stdio.h>

int fibonacci(int n) {
	if(n == 0) return 0;
	else if(n == 1) return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	int num;
	
	scanf("%d", &num);

	printf("%d\n", fibonacci(num));
	
	return 0;
}