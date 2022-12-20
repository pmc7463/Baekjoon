#include <stdio.h>

int main(void)
{
	int arr[3];
	int max1 = 0, max2 = 0;

	for (int i = 0; i < 3; i++) {
		scanf("%d", &arr[i]);
	}

	max1 = (arr[0] * (double)arr[1]) / arr[2];
	max2 = (arr[0] / (double)arr[1]) * arr[2];

	if (max1 >= max2)
		printf("%d\n", max1);
	else
		printf("%d\n", max2);
	
	return 0; 
}