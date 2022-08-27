#include <stdio.h>
#include <string.h>

int main() {
	int i, j;
	char alphabet[101];
	char arr[26];

	scanf("%s", &alphabet);

	for(i = 0; i < 26; i++) {
		arr[i] = -1;	// 없는 문자는 -1 저장 
	}

	for(i = 97; i<= 122; i++) {
		for(j = 0; j < strlen(alphabet); j++) {
			if(alphabet[j] == i) {
				arr[alphabet[j] - 'a'] = j;	// i == 97 (a) 라면 alphabet[j] 는 97이 되고 'a'도 97이여서 빼주면 0이 된다
											// 그럼으로 arr[0]에 문자형의 첫번째가 담기게 된다.
				break;	// 같은 문자가 들어오면 뒤에 들어온 문자가 저장 되기 때문에 첫번째 만 받고 브레이크
			}
		}
	}
	for(i = 0; i < 26; i++) {
		printf("%d ",arr[i]);
	}

	return 0;
}