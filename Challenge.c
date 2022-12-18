#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num, sum, min, input;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		sum = 0;
		min = 101;

		for (int j = 0; j < 7; j++) {
			scanf("%d", &input);
			if (input % 2 == 0) {
				sum += input;

				if (min > input)
					min = input;
			}
		}
		printf("%d %d\n", sum, min);
	}
	return 0; 
}