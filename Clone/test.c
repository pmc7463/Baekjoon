#include <stdio.h>
#include <string.h>

int main(){
	char a[1000002];
	int i, j = 0;
	int length; 
	
	fgets(a,sizeof(a),stdin); // (char, 크기, *입력스트림)
	a[strlen(a)-1] = '\0';	// '\0' 문자열 끝을 알림

	length = strlen(a);

	if(length == 1)
	{
		if(a[0] == ' ')
		{
			printf("0");
			return 0;
		}
	}
	
	for(i = 1; i < length - 1; i++)
	{
		if(a[i] == ' ')
		{
			j++;
		}	
	}
	
	printf("%d", j+1);

	return 0;
} 