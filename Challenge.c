#include <stdio.h>

int arr[10001];

int self_number(int i) {
	int sum = 0;

	sum = i;

	do {
		sum = sum + (i % 10);
		i = i / 10;
	} while(i != 0);	// 몫이 0이 될 때까지 반복
	
	return sum;
}

int main() {
	int i, j = 0, count;
	for(i = 1; i <= 10000; i++)	// 10000보다 작거나 같은 셀프넘버를 찾기 위해서
		arr[j++] = self_number(i);
	
	for(i = 1; i <= 10000; i++) {
		count = 0;
		for(j = 0; arr[j] != 0; j++) {
			if(i == arr[j]) // 같은 값이 있을 때
				count++;
		}
		if(count == 0)	// 끝까지 돌았는데 같은 값이 없을 때 count는 증가하지 않으므로 0일것					
			printf("%d\n", i);
	}
	return 0;
}