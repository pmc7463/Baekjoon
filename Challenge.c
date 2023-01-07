#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, repetiton;
	char alphabet;

	scanf("%d", &repetiton);

	for (int k = 0; k < repetiton; k++) {
		scanf("%d %c", &num, &alphabet);
		
		for (int i = 1; i <= num; i++) {
			for (int j = 1; j <= i; j++) {
				if (alphabet > 'Z') {
					alphabet -= 26;
					printf("%c", alphabet);
				}
				else
					printf("%c", alphabet);
			}
			alphabet++;
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}