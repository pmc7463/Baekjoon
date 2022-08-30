#include <stdio.h>
#include <string.h>

int main() {
	char str[101];
	int count = 0;
	int length = 0;

	scanf("%s", str);

	length = strlen(str);
	for(int i = 0; i < length; i++) {
		if(str[i] == 'c') {
			if(str[i + 1] == '=' || str[i + 1] == '-')
				count++;
		}
		else if(str[i] == 'd') {
			if(str[i + 1] == 'z') {
				if(str[i + 2] == '='){
					count++;
				}
			}
			else if(str[i + 1] == '-')
				count++;
		}
		else if(str[i] == 'l') {
			if(str[i + 1] == 'j')
				count++;
		}
		else if(str[i] == 'n') {
			if(str[i + 1] == 'j')
				count++;
		}
		else if(str[i] == 's') {
			if(str[i + 1] == '=')
				count++;
		}
		else if(str[i] == 'z') {
			if(str[i + 1] == '='){
				//if(str[i - 1] != 'd'){
					count++;
				//}
			}
		}
	}
	printf("%d", length - count);
	
	return 0;
}