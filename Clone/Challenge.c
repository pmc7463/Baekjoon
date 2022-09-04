#include <stdio.h>

int main() {
	int arr[15][15] = {0,};	// 아파트의 층은 14보다
	//작거나 같기 때문에 각각 15크기의 2중 배열을 선언하고 0으로 초기화
	int test, layer, room;

	for (int i = 0; i < 15; i++) {
		arr[0][i] = i;	// 0층의 i호에는 i명 만큼 살기때문에 0층에는 i명으로 선언
	}

	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
		}	//밑에층의 1호부터 해당호까지 사람들의 합을 arr[i][j]에 넣어준다. 
	}

	scanf("%d", &test);

	for (int i = 0; i < test; i++) {
		scanf("%d %d", &layer, &room);
		printf("%d\n", arr[layer][room]);
	}
	return 0;
}