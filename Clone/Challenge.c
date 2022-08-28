#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char a[4], b[4];
	char temp1[1], temp2[1];
	int length, a_i, b_i;

	scanf("%s", &a);
	scanf("%s", &b);
	
	length = strlen(a);

	temp1[0] = a[0];
	a[0] = a[2];
	a[2] = temp1[0];

	temp2[0] = b[0];
	b[0] = b[2];
	b[2] = temp2[0];
	
	a_i = atoi(a);
	b_i = atoi(b);

	if(a_i > b_i)
		printf("%d", a_i);
	else 
		printf("%d", b_i);

	return 0;
}