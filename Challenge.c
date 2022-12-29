#include <stdio.h>
#include <string.h>

int main(void)
{
	int height = 10;
	char bowl[51];

	scanf("%s", bowl);

	for (int i = 0; i < strlen(bowl); i++) {
		if (bowl[i] == '(' && bowl[i+1] == '(' )
			height += 5;
		else if (bowl[i] == '(' && bowl[i+1] == ')' )
			height += 10;
		else if (bowl[i] == ')' && bowl[i+1] == ')' )
			height += 5;
		else if (bowl[i] == ')' && bowl[i+1] == '(' )
			height += 10;
	}

	printf("%d\n", height);
	return 0; 
}