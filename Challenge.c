#include <stdio.h>

int main() {
	int arr[10], i, j;
	int count = 1; // 서로 다른 값의 갯수
	
	for(i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		arr[i] %= 42;
	}
	
	for(i = 0; i < 9; i++) {
		for(j = i + 1; j < 10; j++)
			if(arr[i] == arr[j]) {
                break; // 서로 같은 수일 경우
            }
            if( j == 10 ) 
                count++; // 서로 같은 수가 없는 경우
	}

	printf("%d",count);

    return 0;
}