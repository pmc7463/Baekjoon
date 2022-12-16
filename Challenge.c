#include <stdio.h>

int main(void)
{
	int max = 0 , sum = 0, line;
	int score[5][4];
	
    for(int i = 0; i < 5; i++){
		for(int j = 0; j < 4; j++){
			scanf("%d", &score[i][j]);
		}
	}

	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 4; j++){
			sum += score[i][j];
		}
        
		if(max < sum){
			max = sum;
			line = i + 1;
		}
		sum = 0;
	}
	printf("%d %d", line, max);
	return 0; 
}