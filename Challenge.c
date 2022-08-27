#include <stdio.h>
#include <stdlib.h>

int main() {
	char arr[100];
	char temp[]={"0"};
	int n , sum = 0;

	scanf("%d", &n);
	scanf("%s", arr);

	for (int i = 0; i < n; i++) {
		temp[0] = arr[i];
		sum += atoi(temp);
	}

	printf("%d",sum);

	return 0;
}