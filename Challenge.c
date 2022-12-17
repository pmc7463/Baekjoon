#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, Q1 = 0, Q2 = 0, Q3 = 0, Q4 = 0, AXIS = 0;
	int* x;
	int* y;

	scanf("%d", &num);
	x = (int*)malloc(sizeof(int) * num);
	y = (int*)malloc(sizeof(int) * num);	

	for (int i = 0; i < num; i++) {
		scanf("%d %d", &x[i], &y[i]);
	}

	for (int i = 0; i < num; i++) {
		if (x[i] > 0 && y[i] > 0)
			Q1++;
		if (x[i] > 0 && y[i] < 0)
			Q4++;
		if (x[i] < 0 && y[i] > 0)
			Q2++;
		if (x[i] < 0 && y[i] < 0)
			Q3++;
		if (x[i] == 0 || y[i] == 0)
			AXIS++;
	}

	printf("Q1: %d\n", Q1);
	printf("Q2: %d\n", Q2);
	printf("Q3: %d\n", Q3);
	printf("Q4: %d\n", Q4);
	printf("AXIS: %d\n", AXIS);

	free(x);
	free(y);
	return 0; 
}