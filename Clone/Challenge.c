#include <stdio.h>

int main() {
	int sugar, amount, bag;
	int i = 1;
	scanf("%d", &sugar);

	while (1) {
		amount = sugar - (3 * i);

		if (sugar % 5 == 0) {
			bag = sugar / 5;
			break;
		} 

		if (amount % 5 == 0 || amount == 0) {	// 5로 나누어 떨어지거나 amount가 0이면 3의 배수이다.
			bag = amount / 5 + i;
			break;
		}

		if (amount <= 2) {
			bag = -1;
			break;
		}
		i++;
	}
	printf("%d", bag);
	return 0;
}