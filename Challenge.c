#include <stdio.h>

int main() {
	float  input;

    scanf("%f", &input);

    printf("%.10f\n%.10f\n", 100 / input, 100 / (100 - input));

	return 0;
}