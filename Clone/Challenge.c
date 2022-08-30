#include <stdio.h>

int main() {
	int input = 0, count = 0;
	int alpabet[26] = {0};
	char str[101];
	
	scanf("%d", &input);

	for(int i = 0; i < input; i++) {
		scanf("%s", str);
		for(int j = 0; j < 101; j++){
			if(alpabet[str[j] - 'a'] == 0 || j - alpabet[str[j] - 'a'] < 2) {
				if(str[0] == str[j] && j - alpabet[str[j] - 'a'] > 1)
					break;
				alpabet[str[j]  - 'a'] = j;
			}
			// 알파벳이 연속되는지 확인
			else if(j - alpabet[str[j] - 'a'] > 1)
				break;
			//알파벳이 연속되지 않았을 때 break
			if(str[j] == '\0') {
				count++;
				break;
			}
			//단어에 알파벳이 연속되지 않는 부분이 없을 때 count에 1을 추가
		}
		// 초기화
		for(int i = 0; i < 101; i++)
			str[i] = '\0';
		for(int i = 0; i < 26; i++)
			alpabet[i] = 0;
	}
	printf("%d", count);

	return 0;
}