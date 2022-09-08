#include <stdio.h>

int main() {
	int number[8] = {0};
	int count1 = 0, count2 = 0;
	int temp1[] = {1,2,3,4,5,6,7,8};
	int temp2[] = {8,7,6,5,4,3,2,1};

	for (int i = 0; i < 8; i++) {
		scanf("%d", &number[i]);
		if (number[i] < 0 || number[i] > 8)
			return 0;
	}

	for (int i = 0; i < 8; i++) {
		if (temp1[i] == number[i])
			count1++;
		if (temp2[i] == number[i])
			count2++;
	}

	if (count1 == 8) 
		printf("ascending");
	else if (count2 == 8)
		printf("descending");
	else
		printf("mixed");
	
	return 0;
}