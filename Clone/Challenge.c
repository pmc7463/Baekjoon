#include <stdio.h>

int main() {
	int house, min = 2, max = 5, count = 2;
	
	scanf("%d", &house);

	if(house == 1) {
		printf("1");
		return 0;
	}
	
	while(1) {
		if(house >= min && max + min >= house) {
			printf("%d", count);
			break;
		}
		min = min + max + 1;
		max += 6;
		count++;
	}

	return 0;
}