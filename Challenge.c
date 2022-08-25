#include <stdio.h>

int main() {
	int problem, score, sum = 0;
    char quiz[80];

    scanf("%d", &problem);

    for(int i = 0; i < problem; i++) {
        scanf("%s", quiz);
        sum = 0;
        for(int j = 0; quiz[j] != '\0'; j++) {
            score = 0;
            while(quiz[j] == 'O') {
                score++;
                sum += score;
                j++;
            }
            if(quiz[j] == '\0')
                break;
        }
        printf("%d\n", sum);
    }
    return 0;
}