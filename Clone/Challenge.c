#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char sum[10] = {0};
	int arr[10] = {0,};
	int A, B, C, mul, length, temp;
	
	scanf("%d\n%d\n%d", &A, &B, &C);
	
	mul = A * B * C;
	
	sprintf(sum, "%d", mul);	//itoa 는 C 표준 함수가 아니며, 일부 C 구현체에만 지원합니다.

	length = strlen(sum);
	
	for (int i = 0; i < length; i++) {
		temp = mul % 10;
		arr[temp]++;
		mul /= 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}