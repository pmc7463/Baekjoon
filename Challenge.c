#include <stdio.h>

int main() {
	int arr[10], i, j;
	int count = 1; // ���� �ٸ� ���� ����
	
	for(i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		arr[i] %= 42;
	}
	
	for(i = 0; i < 9; i++) {
		for(j = i + 1; j < 10; j++)
			if(arr[i] == arr[j]) {
                break; // ���� ���� ���� ���
            }
            if( j == 10 ) 
                count++; // ���� ���� ���� ���� ���
	}

	printf("%d",count);

    return 0;
}