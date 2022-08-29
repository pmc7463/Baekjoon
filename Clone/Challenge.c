#include <stdio.h>
#include <string.h>

int main() {
	char arr[16];
	char str[][5] = {"ABC", "DEF", "GHI", "JKL","MNO", "PQRS", "TUV", "WXYZ"};
	int time = 0, i = 0;

	scanf("%s", arr);
	
	while(arr[i]) {
		for(int j = 0; j < 8; j++) {
			char *ptr = strchr(str[j], arr[i]);
			if(ptr != NULL)
				time += j + 3;
		}
		i++;
	}

	printf("%d", time);

	return 0;
}