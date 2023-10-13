#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main(void) {
	int a;
	int test;
	int F, E;
	int max = 0;
	int cnt = 0;
	int flag = 0;
	int E_F = 0;
	int flag2;
	scanf("%d", &a);
	scanf("%d", &test);

	int* arr = malloc(sizeof(int) * a);
	
	for (int i = 0; i < a; i++) {
		arr[i] = 0;
	}

	for (int j = 1; j <= test; j++) {
		cnt = 0;
		scanf("%d %d", &F, &E);
		if (E - F > E_F) {
			E_F = E - F;
			flag2 = j;
		}
		for (int p = F-1; p < E; p++) {
			if (arr[p] == 0)
				arr[p] = j;
		}
		for (int k = 0; k < a; k++) {

			if (arr[k] == j) {
				cnt++;
			}
		}

		if (cnt > max) {
			max = cnt;
			flag = j;
		}
		
	}
	/*
	for (int i = 0; i < a; i++) {
		printf("%d\n", arr[i]);
	}
	*/
	//printf("E-F : %d\n", E_F);
	//printf("flag : %d\n", flag);

	printf("%d\n", flag2);
	printf("%d\n", flag);

	free(arr);

	return 0;
}