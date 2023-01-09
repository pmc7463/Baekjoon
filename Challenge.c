#include <stdio.h>

int main(void) {
	int repetion, variable, degree, temp = 0;

	scanf("%d", &repetion);

	for (int j = 0; j < repetion; j++) {
		scanf("%d %d", &variable, &degree);
		temp = variable;
		for (int i = 1; i < degree; i++) {
			temp = variable * temp % 10;
		}
		if (temp % 10 == 0)
			printf("10\n");
		else
			printf("%d\n", temp % 10);
	}
	return 0;
}