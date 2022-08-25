#include <stdio.h>

double avg(int scores[], int student);

int main() {
	int test, student = 0;
	int scores[1001] = {0, };
	double temp[1001] = {0, };

	scanf("%d", &test);
	
	for(int i = 0; i < test; i++) {
		scanf("%d", &student);

		for(int j = 0; j < student; j++) {
			scanf("%d", &scores[j]);
		}
		temp[i] = avg(scores, student);
	}
	for(int k = 0; k < test; k++)
		printf("%.3f%%\n", temp[k]);
}

double avg(int scores[], int student) {
	double avgs;
	int sum = 0, count = 0;

	for(int i = 0; i < student; i++) {
		sum += scores[i];
	}
	avgs = sum / student;

	for(int j = 0; j < student; j++) {
		if(avgs < scores[j])
			count++;
	}
	return 100 * (double)count / student;
}