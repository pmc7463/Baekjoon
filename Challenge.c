#include <stdio.h>
#include <string.h>

int main() {
	int problem, repetition, i, j, length;
	char str[21] = {0, };

	scanf("%d", &problem);

	if(problem >= 1 && problem <= 1000){
		for(int i = 0; i < problem; i++) {
			j = 0;
			scanf("%d", &repetition);
			scanf("%s", &str);
			length = strlen(str);	// 'AAABBBCCC		' != 'AAABBBCCC' 와 다르다
			for(int j = 0; j < length; j++) {	// 1문자 선택 >> 2문자 선택 >> n문자 선택
				for(int k = 0; k < repetition; k++)	// 문자 하나하나 반복
					printf("%c", str[j]);
			}
			printf("\n");
		}
	}
	return 0;
}