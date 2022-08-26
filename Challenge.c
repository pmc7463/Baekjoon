#include <stdio.h>

int main() {
	int arr[3];
	int N, han, count, temp;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++){
		if(i < 100)
			han = i;
		else if( i == 1000)
			break;
		else {
			count = 0;
			temp = i;
			while(temp > 0) {
				arr[count] = temp % 10;
				temp /= 10;
				count++;
			}	
			if(arr[0] - arr[1] == arr[1] - arr[2])
				han++;
		}
	}
	printf("%d", han);

	return 0;
}